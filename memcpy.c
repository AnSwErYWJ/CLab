/*************************************************************************
	> File Name: memcpy.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月28日 星期二 19时36分28秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

void *my_memcpy(void *dest,const void *src,size_t n)
{
    int i;
    assert(dest!=NULL && src!=NULL);
    char *tmp=dest;
    const char *s=src;
    for(i=0;i<n;i++)
        tmp[i]=s[i];
    return dest;
}

int main(void)
{
    char *p="answer";
    char q[10];
    my_memcpy(q,p,(strlen(p)+1));
    printf("%s\n",q);
    return 0;
}
