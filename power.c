/*************************************************************************
	> File Name: power.c
	> Author:AnSwEr 
	> Mail:yuanweijie1993@gmail.com 
	> Created Time: 2015年04月16日 星期四 20时02分29秒
 ************************************************************************/

/*显示计算2的16次方*/
#include<stdio.h>
#include<math.h>
#define N 16
int main()
{
    int n;
    printf("n\t2^n\n");
    for(n=0;n<=N;n++)
    {
        printf("%d\t%d\n",n,(int)pow(2,n));
    }
    return 0;
}
