/*************************************************************************
	> File Name: del_cp.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 19时27分49秒
 ************************************************************************/

/*
 * 删除字符串中的a，并复制b。
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char s[] = "aabcbba";
    int i,j;
    int n = 0,count = 0;
    int len = strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i] != 'a')
        {
            s[n++] = s[i];
        }
        if(s[i] == 'b')
        {
            count++;
        }
    }

    s[n] = '\0';

    int newlen = count + n;
    s[newlen] = 0;

    /*倒序复制，不会打乱字符串顺序*/
    for(i=newlen-1,j=n-1;j>=0;j--)
    {
        s[i--] = s[j];
        if(s[j] == 'b')
        {
            s[i--] = s[j];
        }
    }

    printf("%s\n",s);

    return 0;
}
