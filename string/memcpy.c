/*************************************************************************
	> File Name: memcpy.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 16时20分44秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void *my_memcpy(void *dest,const void *src,size_t n)
{
    if(n <= 0)
    {
        return NULL;
    }

    assert(dest != NULL);
    assert(src != NULL);

    void *temp = dest;

    while(n--)
    {
        *(char *)(dest++) = *(char *)(src++);
    }

    return temp;
}

int main(void)
{
    const char src[]="answer nihao";
    char *dest = (char *)malloc(sizeof(src));

    printf("%s\n",(char *)my_memcpy(dest,src,sizeof(src)));

    return 0;
}
