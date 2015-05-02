#include <stdio.h>
#include <string.h>
#include <string.h>
void main()
{
    char s[100];  // 存放输入的字符串
    int i, j, n,flag=1;
    printf("输入字符串：");
    gets(s);

    n=strlen(s);
    for(i=0,j=n-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
    }
    if(flag)
        printf("是回文串\n");
    else
        printf("不是回文串\n");
}
