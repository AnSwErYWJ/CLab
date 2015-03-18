#include<stdio.h>
int main()
{
  int n,count;
  unsigned long long int factorial=1;
  printf("Please Enter an integer:");
  scanf("%d",&n);
  if(n<0)
    printf("ERROR!\n");
  else
  {
    if(n==0)
      printf("Factorial=1\n");
    else
    {
      for(count=1;count<=n;count++)
        factorial*=count;
      printf("Factorial=%lu\n",factorial);
    }
  }
  return 0;
}
