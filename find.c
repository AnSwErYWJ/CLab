#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc,char *argv[])
{
    int ch,bian=0,count=0;
    char find[50],temp[1000];
    FILE *pt;

    if (argc != 2)
    {
        printf("请使用格式: %s 文件名",argv[0]);
        exit(1);
    }

    // 判断能否成功打开文件
    if ((pt = fopen(argv[1],"r"))== NULL)   //将argv[1]赋值给指针pt
    {
        printf("打开文件 %s 失败",argv[1]);
        exit(1);
    }

    printf("请输入要查找的单词:");
    gets(find);
    while((ch=getc(pt))!=EOF)   //EOF 表示文件结束
    {
        if ((ch!=' ')&&(ch!='\n'))
        {
            temp[bian]=ch;
            bian++;
        }
        else
        {
            temp[bian]='\0';
            if ((strcmp(find,temp))==0)
                count++;
            bian=0;
        }
    }
    temp[bian]='\0';
    if ((strcmp(find,temp))==0)
        count++;
    printf("共在文件%s中查找到字符串\"%s\" %d 个\n",argv[1],find,count);
    getch();
    return 0;
}
