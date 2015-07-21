/*************************************************************************
	> File Name: love.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年07月21日 星期二 14时32分29秒
 ************************************************************************/

/*
 * 爱心图案
 */
#include<stdio.h>
#include <math.h>

int main()
{
	float y, x, a;
	for (y = 1.5f;y > -1.5f;y -= 0.1f)
	{
		for (x = -1.5f;x < 1.5f;x += 0.05f)
		{
			a = x*x + y*y - 1;
			putchar(a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ');
		}
		putchar('\n');
	}

	return 0;
}
