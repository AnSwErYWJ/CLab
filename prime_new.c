#include<stdio.h>
int main(int argc,char * argv[])
{
    int flag=0,n,i=2;
    printf("Please input a positive number(>1):");
    scanf("%d",&n);
    if(n<=1)
        printf("%d is not a positive number(>1)\n",n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            printf("%d  ",i);
        }
    }
    if(flag==1)
        printf("\n%d is a prime number!",n);
    if(flag==0)
        printf("\n%d is not a prime number!",n);
    return 0;
}
