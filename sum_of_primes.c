#include<stdio.h>
int prime(int);
int main()
{
    int n,i,flag=0;
    printf("Please enter a positive number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(prime(i)==1)
        {
            if(prime(n-i)==1)
            {
               printf("%d + %d = %d\n",i,n-i,n);
               flag=1;
            }
        }
    }
    if(flag==1)
        printf("%d can be expressed as sum of two prime numbers.\n",n);
    else
        printf("%d can't be expressed as sum of two prime numbers.\n",n);
    return 0;
}

int prime(int n)
{
    int j,flag=1;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
