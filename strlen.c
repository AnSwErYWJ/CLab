/*************************************************************************
	> File Name: strlen.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年08月15日 星期六 16时24分06秒
 ************************************************************************/

/*
 *strlen的实现
 */

#include<stdio.h>

unsigned int my_strlen(const char * str)
{
    const char *tmp = str;
    int i;
    
    for(i=0;*tmp++ != '\0';i++);
    
    return i;
}

int main(void)
{
    char string[]= "answer";

    printf("%d\n",my_strlen(string));
    
    return 0;
}
