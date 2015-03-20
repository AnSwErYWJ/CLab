#include<stdio.h>
int main()
{
    int num1,num2;
    char o;
    printf("Please enter two operands:");
    scanf("%d %d",&num1,&num2);
    getchar();
    printf("Please enter operator(+ or - or * or /):");
    scanf("%c",&o);
    switch(o)
    {
    case '+':
        printf("%d + %d = %d\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d\n",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d\n",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d\n",num1,num2,num1/num2);
        break;
    default:
        printf("ERROR!\n");
        break;
    }
    printf("over\n");
    return 0;
}
