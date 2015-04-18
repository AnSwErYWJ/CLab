#include<stdio.h>
int main(int argc,char *argv[])
{
    int c;
    printf("Character   ASCII\n");
    for(c=32; c<128; c++)
        printf("%c   %10d\n",c,c);
    return 0;
}
