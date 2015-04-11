#include<stdio.h>
#include<string.h>
#define MAX 100
char const delim[]=" \n\r\t\f\v\f";
char const word[]="the";
int main(int argc,const char *argv[])
{
    int count=0;
    char str[MAX];
    char *p;
    fgets(str,MAX,stdin);
    for(p=strtok(str,delim);p!=NULL;p=strtok(NULL,delim))
    {
        if(strcmp(p,word)==0)
        {
            count++;
        }
    }
    printf("total(the):%d\n",count);
    return 0;
}
