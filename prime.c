#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Please enter a positive number:");
    scanf("%d",&n);
    if(n<=1)
        printf("ERROR!");
    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is a not prime number!\n",n);
    else
        printf("%d is a prime number!\n",n);
    return 0;
}
