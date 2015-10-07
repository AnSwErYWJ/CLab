/*************************************************************************
	> File Name: memmove.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 16时54分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void *my_memmove(char *dest,const char *src,size_t n)
{
    if(n == 0)
    {
        return NULL;
    }

    assert(dest != NULL);
    assert(src != NULL);

    const char *a = src;
    char *b = dest;

    if(src >= dest || (src + n) <= dest)
    {
        while(n--)
        {
            *(b++) = *(a++);
        }
    }
    else
    {
        a += n;
        b += n;
        while(n--)
        {
            *(b--) = *(a--);
        }
    }

    return dest;
}


int main(void)
{
    char s[] = "hello";

    printf("%s\n",(char *)my_memmove(s,s+1,sizeof(s)-1));

    return 0;
}
