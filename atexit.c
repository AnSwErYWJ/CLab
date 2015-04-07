#include<stdio.h>
#include<stdlib.h>
/*atexit()函数原型为：int atexit(void (*function)(void))
  用于注册终止函数(即main执行结束后调用的函数),调用顺序为逆序*/
void fun1(),fun2(),fun3(),fun4();
int main()
{
    printf("main1\n");
    atexit(fun1);
    atexit(fun2);
    atexit(fun3);
    atexit(fun4);
    printf("main2\n");
    return 0;
}

void fun1()
{
    printf("fun1\n");
}

void fun2()
{
    printf("fun2\n");
}

void fun3()
{
    printf("fun3\n");
}

void fun4()
{
    printf("fun4\n");
}
