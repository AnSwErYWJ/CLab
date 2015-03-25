#include<stdio.h>
#define MAX 100
void selection(int num[],int n);//选择排序
void insertion(int num[],int n);//插入排序
void bubble(int num[],int n);//冒泡排序
int main()
{
    int n,num[MAX],i=0,d;
    printf("Please enter how many numbers you want sort:");
    scanf("%d",&n);
    printf("Please enter there numbers:\n");
    for(i=0; i<n; i++)
        scanf("%d",&num[i]);
    printf("Choice:\n");
    printf("(1)selection\n(2)insertion\n(3)bubble\n");
    printf("Your choice:");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
        selection(num,n);
        break;
    case 2:
        insertion(num,n);
        break;
    case 3:
        bubble(num,n);
        break;
    default:
        printf("ERROR\n");
        break;
    }
    for(i=0; i<n; i++)
        printf("%d",num[i]);
    return 0;
}

void selection(int num[],int n)//固定一个元素，把其他元素与之比较，排列，再循环下一个。
{
    int i,j,tmp;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                tmp=num[i];
                num[i]=num[j];
                num[j]=num[i];
            }
        }
}


void insertion(int num[],int n)//逐个把要插入的元素与已有的序列依次比较，按升序（或降序）把元素插进去，然后将原有序列的插入元素之后的元素依次后移一位，有多少要插入的元素就循环几次。
{
    int i,j,k,tmp;
    for(i=1; i<n; i++)
        for(j=0; j<i; j++)
            if(num[i]<num[j])
            {
                tmp=num[i];
                for(k=i; k>j; k--)
                    num[k]=num[k-1];
                num[j]=tmp;
            }
}

void bubble(int num[],int n)//依次比较相邻的两个元素，进行排序，一次循环下来，最大的（或最小的）就到了最后；然后再次重新循环，把所有上次循环的赋值都初始化，最后就把第二大的数排在了倒数第二位了，依次下去。
{
    int i,j,tmp;
    for(i=0; i<n; i++)
        for(j=0; j<n-1; j++)
        {
            if(num[j]>num[j+1])
            {
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        }
}
