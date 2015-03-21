#include <stdio.h>
#include <assert.h>

void put_data(int*, unsigned int);
unsigned int get_data(int *);
void cleanse_pointer(int*);

void put_data(int *p, unsigned int data)
{
    assert(data < 4);
    *p |= data;//最后两位存储数据
}

unsigned int get_data(int *p)
{
    return (*p & 3);//利用掩码，显示存储的数据
}

void cleanse_pointer(int *p)
{
    *p &= ~3;//清楚存储的数据
}

int main(void)
{
    assert(sizeof(int) == 4);//断言
    assert(sizeof(void*) == 4);

    unsigned int x = 701;
    unsigned int p = (unsigned int) &x;

    printf("Original ptr: %u\n", p);

    put_data(&p, 3);

    printf("ptr with data: %u\n", p);
    printf("data stored in ptr: %u\n", get_data(&p));

    cleanse_pointer(&p);

    printf("Cleansed ptr: %u\n", p);
    printf("Dereferencing cleansed ptr: %u\n", *(int*)p);

    return 0;
}
