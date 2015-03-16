/*************************************************************************
	> File Name: mathtest.c
	> Author: AnSwEr
	> Created Time: 2015年03月16日 星期一 12时19分10秒
 ************************************************************************/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void swap(int *, int *);
int main()
{
	srand((int)time(0));
	int i;
	for(i=0;i<20;i++)
	{
		int a=rand()%100;
		int b=rand()%100;
		int c=rand()%4;
		switch(c)
		{
			case 0:
				printf("%d+%d=\n",a,b);
				break;
			case 1:
				printf("%d+%d=\n",a,b);
				break;
			case 2:
				if(a<b)
					swap(&a,&b);
				printf("%d-%d=\n",a,b);
				break;
			case 3:
				if(a<b)
					swap(&a,&b);
				printf("%d/%d=\n",a,b);
				break;
			default:
				break;
		}
	}
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
