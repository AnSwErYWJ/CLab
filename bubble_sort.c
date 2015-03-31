#include<stdio.h>
#define N 5
void bubble_sort(int num[],int n);
void bubble_sort_better(int num[],int n);
int main()
{
    int num[N]= {5,4,3,2,1};
    int i;
    printf("Before sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    bubble_sort(num,N);
    printf("After sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    bubble_sort_better(num,N);
    printf("After better sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    return 0;
}

void bubble_sort(int num[],int n)
{
    int i,j;
    int tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        }
    }
}

void bubble_sort_better(int num[],int n)//改良版
{
    int i,j;
    int tmp;
    for(i=0;i<n-1;i++)
    {
        int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(num[j]>num[j+1])
            {
                flag=1;
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        }
        if(!flag)
           break;
    }
}
