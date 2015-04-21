#include<stdio.h>
#define MAX 128

int getline(char line[],int max)
{
    int i=0;
    char c;
    printf("Enter a string:\n");
    while((c=getchar())!='\n' && i<max-1)
        line[i++]=c;
    line[i]='\0';
    return i;
}

int main(int argc,const char * argv[])
{
    int len=0;
    char buf[MAX];
    while(1)
    {
        len=getline(buf,MAX);
        if(len==0)
            break;
        printf("len=%d,line=%s\n",len,buf);
    }
    return 0;
}
