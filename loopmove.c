#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void LoopMove(char *pStr, int steps)
{
    int n = strlen(pStr) - steps;
    char tmp[MAX_LEN];
    memmove(tmp, pStr+n, steps);  //拷贝字符串
    memmove(pStr+steps, pStr, n);
    memmove(pStr, tmp, steps);  //合并得到结果
}

void LoopMove1(char *pStr, int steps)
{
    int n = strlen(pStr) - steps;
    char tmp[MAX_LEN];
    strcpy(tmp, pStr+n);  //拷贝字符串
    strcpy(tmp+steps, pStr);
    *(tmp + strlen(pStr)) = '\0';
    strcpy(pStr, tmp);  //合并得到结果
}

int main()
{
    char str[] = "www.coderbbs.com";
    LoopMove1(str, 3);
    printf("%s\n", str);

    return 0;
}

