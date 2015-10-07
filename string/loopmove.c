/*************************************************************************
	> File Name: loopmove.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 20时16分09秒
 ************************************************************************/

/*
 * 循环右移
 */


#include<stdio.h>
#include<string.h>

#define MAX 256

void loopmove(char * str,int steps)
{
    char tmp[MAX];
    int len = strlen(str) - steps;

    memmove(tmp,str+len,steps);
    memmove(str+steps,str,len);
    memmove(str,tmp,steps);
}

int main(void)
{
    char str[] = "123456";
    
    loopmove(str,2);
    printf("%s\n",str);
    
    return 0;
}
