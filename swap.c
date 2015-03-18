#include<stdio.h>
void swap(int *,int *);
int main()
{
  int a,b;
  printf("Please enter the numbers:\n");
  printf("a = ");
  scanf("%d",&a);
  printf("b = ");
  scanf("%d",&b);
  swap(&a,&b);
  printf("After swaping:\n");
  printf("a = %d\nb = %d\n",a,b);
  return 0;
}

void swap(int * x,int * y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
