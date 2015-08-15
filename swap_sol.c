/*************************************************************************
	> File Name: swap_sol.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年08月15日 星期六 15时45分25秒
 ************************************************************************/

/*
 * 交换两个变量的三种方法
 */

#include<stdio.h>

int main()
{
    int a = 1,b = 2;
    printf("Before swap:a = %d,b = %d\n",a,b);

    /*临时变量法*/
    int temp;
    temp=a;
    a=b;
    b=a;
    printf("After use temp sol:a = %d,b = %d\n",a,b);

    a = 1;
    b = 2;
    /*加减法*/
    b = a - b;
    a = a - b;
    b = a + b;
    printf("After use add_sub sol:a = %d,b = %d\n",a,b);

    a = 1;
    b = 2;
    /*exclusive or*/
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After use exclusive or sol:a = %d,b = %d\n",a,b);

    return 0;
}
