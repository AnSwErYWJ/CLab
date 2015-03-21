#include <stdio.h>
#include<math.h>
int binary_decimal(int n);
int decimal_binary(int n);
int main()
{
    char c;
    int n;
    printf("Instructions:\n");
    printf("1. Enter alphabet 'd' to convert binary to decimal.\n");
    printf("2. Enter alphabet 'b' to convert decimal to binary.\n");
    scanf("%c",&c);
    switch(c)
    {
    case 'd':
    case 'D':
        printf("Enter a binary number: ");
        scanf("%d", &n);
        printf("%d in binary = %d in decimal\n", n, binary_decimal(n));
        break;
    case 'b':
    case 'B':
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("%d in decimal = %d in binary\n", n, decimal_binary(n));
        break;
    default:
        printf("ERROR!\n");
        break;
    }
    return 0;
}

int binary_decimal(int n)
{
    int decimal=0,rem,i=0;
    while(n!=0)
    {
        rem=n%10;
        decimal=decimal+rem*pow(2,i);
        n=n/10;
        i++;
    }
    return decimal;
}
int decimal_binary(int n)
{
    int binary=0,rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        binary=binary+rem*i;
        n=n/2;
        i*=10;
    }
    return binary;
}
