/*************************************************************************
	> File Name: reverse.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 19时47分27秒
 ************************************************************************/

/*
 * 反转一个字符串
 */

#include<stdio.h>
#include<assert.h>
#include<string.h>

char *reverse(char *str)
{
    assert(str);

    int i;
    int len = strlen(str);
    char temp;

    for(i=0;i<len/2;i++)
    {
        temp = *(str+i);
        *(str+i) = *(str+len-1-i);
        *(str+len-1-i) = temp;
    }

    str[len] = '\0';

    return str;
}

int main(void)
{
    char str[] = "hello world";

    printf("%s\n",reverse(str));

    return 0;
}
