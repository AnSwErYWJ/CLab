/*************************************************************************
	> File Name: strcat.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 20时08分29秒
 ************************************************************************/

/*
 * 连接字符串
 */

#include<stdio.h>

char *my_strcat(char *dest,const char *src)
{
    char *temp = dest;
    const char *s = src;

    while(*temp != '\0')
        temp++;

    while((*(temp++) = *(s++)) != '\0');

    temp = '\0';

    return dest;
}

int main(void)
{
    char dest[] = "he";
    const char src[] = "llo";

    printf("%s\n",my_strcat(dest,src));

    return 0;
}
