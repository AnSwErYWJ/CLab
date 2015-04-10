/*************************************************************************
	> File Name: monkey_peach.c
	> Author: AnSwEr
	> Created Time: 2015年04月10日 星期五 11时38分14秒
 ************************************************************************/
#include<stdio.h>
int main()
{
	int day=9, a, b=1;
	while(day>0)
	{
		a=(b+1)*2;
		b=a;
		day--;
	}
	printf("The number of peach is %d!\n", b);
	return 0;
}
