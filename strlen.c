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

size_t my_strlen(const char * str)
{
    const char *tmp = str;
    
    while(*tmp++);
    
    return(tmp-str-1);
}

int main(void)
{
    char string[]= "answer";

    printf("%ld\n",my_strlen(string));
    
    return 0;
}
