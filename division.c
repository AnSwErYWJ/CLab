#include<stdio.h>
int main()
{
int dividend,divisor,quotient,remainder;
printf("Enter dividend:");
scanf("%d",&dividend);
printf("Enter divisor");
scanf("%d",&divisor);
quotient=dividend/divisor;
remainder=dividend%divisor;
printf("quotient=%d\n",quotient);
printf("remainder=%d\n",remainder);
}
