#include<stdio.h>
#define N 5
void select_sort(int num[],int n);
int main()
{
    int num[N]= {5,4,3,2,1};
    int i=0;
    printf("Before sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    select_sort(num,N);
    printf("After sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    return 0;
}

void select_sort(int num[],int n)
{
    int i=0,j=0,tmp;
    int min_index;
    for(i=0; i<n-1; i++)
    {
        min_index=i;
        for(j=i+1; j<n; j++)
        {
            if(num[min_index]>num[j])
                min_index=j;
        }
        if(i!=min_index)
        {
            tmp=num[i];
            num[i]=num[min_index];
            num[min_index]=tmp;
        }
    }
}
