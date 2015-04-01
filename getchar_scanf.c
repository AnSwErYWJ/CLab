#include<stdio.h>
int main()
{
    int ch;
    char c;
    scanf("%c",&c);
    printf("%c\n",c);
    while((ch=getchar())!= '\n')//吃掉遗留在缓存的'\n'
        continue;
    ch=getchar();
    putchar(ch);
    return 0;
}
