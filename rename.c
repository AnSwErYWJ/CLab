/*************************************************************************
	> File Name: rename.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月21日 星期二 11时04分31秒
 ************************************************************************/

/*
 * 在程序中改变程序名
 */

#include<stdio.h>
int main(int argc,char *argv[])
{
    if(rename(argv[0],"newname") == 0)
        printf("rename succeed!\n");
    else
        perror("rename");
    return 0;
}
