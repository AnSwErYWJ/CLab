/*************************************************************************
	> File Name: 01swap.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年10月07日 星期三 12时40分43秒
 ************************************************************************/

/*
 * 把一个0-1串进行交换，计算最少交换次数
 */

#include<stdio.h>
#include<string.h>

const char arr[]="0001010101";

int main(void)
{
    int len = strlen(arr);
    int i,j;
    int count = 0;

    for(i=0,j=len-1;i<j;i++,j--)
    {
        for(;(i<j)&&(arr[i] == '0');i++)
        for(;(i<j)&&(arr[i] == '1');j--);
        if(i<j)
        {
            count++;
        }
    }

    printf("%d\n",count);
    
    return 0;
}
