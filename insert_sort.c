#include<stdio.h>
#define N 5
void insert_sort(int num[],int n);
int main()
{
    int num[N]= {3,5,2,1,4};
    int i=0;
    printf("Before sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
    insert_sort(num,N);
    printf("After sorted:");
    for(i=0; i<N; i++)
        printf("%d",num[i]);
    printf("\n");
}

void insert_sort(int num[],int n)
{
    int i=1,k,temp;
    for(i=1; i<n; i++)
    {
        int j=0;
        while((num[j]<num[i]) && j<i)
            j++;
        if(i!=j)
        {
            temp=num[i];
            for(k=i; k>j; k--)
            {
                num[k]=num[k-1];
            }
            num[j]=temp;
        }
    }
}
