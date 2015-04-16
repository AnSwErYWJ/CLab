/*************************************************************************
> File Name: factorial_v2.c
> Author:AnSwEr 
> Mail:yuanweijie1993@gmail.com 
> Created Time: 2015年04月16日 星期四 20时26分25秒
************************************************************************/

#include<stdio.h>
#define N 10
long factorial_recursion(int n);//递归
long factorial_iteration(int n);//迭代

int main()
{
    printf("The factorial(recursion) of %d is %ld.\n",N,factorial_recursion(N));
    printf("The factorial(iteration) of %d is %ld.\n",N,factorial_iteration(N));
    return 0;
}

long factorial_recursion(int n)
{
    if(n <= 0)
      return 1;
    else
     return n*factorial_recursion(n-1);
}

long factorial_iteration(int n)
{
    int result=1;
    while(n>1)
    {
        result*=n;
        n--;
    }
    return result;
}
