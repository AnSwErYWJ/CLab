/*************************************************************************
	> File Name: strcpy.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 16时11分34秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

char *my_strcpy(char *dest,const char *src)
{
    if(dest == src)
    {
        return dest;
    }

    assert(dest != NULL);
    assert(src != NULL);

    char *temp = dest;

    while((*(dest++) = *(src++)) != '\0');

    return temp;
}

int main(void)
{
    const char src[] = "answer nihao";
    char *dest = (char *)malloc(sizeof(src));
    
    printf("%s\n",my_strcpy(dest,src));

    return 0;
}
