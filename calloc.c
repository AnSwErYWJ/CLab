#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char * argv[])
{
    int N,i;
    int *num;
    printf("Input array length:");
    scanf("%d",&N);
    num=(int *)calloc(N,sizeof(int));
    for(i=0; i<N; i++)
    {
        num[i]=i+1;
        printf("%-3d",num[i]);
        if((i+1)%5==0)
            printf("\n");
    }
    free(num);
    num=NULL;
    printf("\n");
    return 0;
}
