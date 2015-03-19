#include<stdio.h>
#define MAX 1024
int main()
{
    int F[MAX]= {0};
    int n,i;
    printf("Please input the number of terms:");
    scanf("%d",&n);
    F[0]=0;
    F[1]=1;
    for(i=2; i<n; i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
    printf("Fibonacci Series:");
    for(i=0; i<n; i++)
    {
        printf("%d",F[i]);
        printf(" ");
    }
    printf("\n");
    return 0;
}
