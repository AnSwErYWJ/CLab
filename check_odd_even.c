#include<stdio.h>
int main()
{
  int number;
  printf("Please enter the integer you want to check(q to quit):");
  while(scanf("%d",&number)==1)
  {
    if(number%2==0)
      printf("%d is even!\n",number);
    else
      printf("%d is odd!\n",number);
    printf("Please enter the integer you want to check(q to quit):");
  }
  printf("Bye!\n");
  return 0;
}
