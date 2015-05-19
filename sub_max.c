#include<stdio.h>
#define MAX 20
int main(void)
{
    int n=0,i=0,num[MAX],j=0,sum,temp=0;
    printf("Enter how many numbers you will enter:");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("The array is :");
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    sum=num[0];
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            temp+=num[j];
            if(temp > sum)
                sum=temp;
        }
        temp=0;
    }
    printf("The max value of subarray is : %d\n",sum);
    return 0;
}
