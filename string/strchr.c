/*************************************************************************
	> File Name: strchr.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 19时55分12秒
 ************************************************************************/

/*
 * 查找字符串中字符c第一次出现的位置
 */

#include<stdio.h>
#include<assert.h>

char *my_strchr(const char *str,int c)
{
    assert(str);

    const char *p = str;
    
    while(*p)
    {
        if(*p == c)
        {
            return p;
        }
        p++;
    }

    return NULL;
}

int main(void)
{
    char str[] = "abcd";

    printf("%c\n",*my_strchr(str,'b'));

    return 0;
}
