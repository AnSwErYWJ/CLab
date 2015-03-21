#include<stdio.h>
#include<string.h>
#define MAX 256
int main()
{
    char s[MAX];
    int count,i;
    printf("Please enter a sentence:");
    gets(s);
    count=strlen(s);
    char ss[count];
    for(i=0;i<count;i++)
    {
        ss[i]=s[count-1-i];
    }
    printf("Result:%s\n",ss);
    return 0;
}
