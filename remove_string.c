/*************************************************************************
	> File Name: remove_string.c
	> Author:AnSwEr 
	> Mail:yuanweijie1993@gmail.com 
	> Created Time: 2015年04月26日 星期日 19时16分58秒
 ************************************************************************/

#include<stdio.h>
#define MAX 20
int main(int argc,char *argv[])
{
    char s[MAX];
    int i=0;
    int j=0;
    char c;
    printf("Input the string:\n");
    fgets(s,MAX,stdin);
    printf("Input the character:\n");
    c=getchar();
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i] != c && s[i] != '\n')
            s[j++]=s[i];
    }
    printf("%s",s);
    return 0;
}
