#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*产生0~9的随机数*/
int main(int argc , const char * argv[])
{
    int num;
    srand((unsigned)time(NULL));
    num=rand()%10;
    printf("%d",num);
    return 0;
}
