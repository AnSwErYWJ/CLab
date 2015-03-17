#include<stdio.h>
int main()
{
int a;
float b;
double c;
char d;
printf("Size of int is %d bytes\n",sizeof(a));//sizeof结果为字节单位
printf("Size of float is %d bytes\n",sizeof(b));
printf("Size of double is %d bytes\n",sizeof(c));
printf("Size of char is %d bytes\n",sizeof(d));
return 0;
}
