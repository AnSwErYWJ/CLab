#include<stdio.h>
#define MAX 100
int main(int argc,const char *argv[])
{
    int x=0,y=0,z=0;
    printf("result:\n");
    for(x=0;x<=MAX;x++)
    {
        for(y=0;y<=MAX;y++)
        {
            for(z=0;z<=MAX;z++)
            {
              if((z%3==0) && (x+y+z==100) && (x*5+y*3+z/3==100))
                printf("公鸡：%d 母鸡：%d 小鸡：%d \n",x,y,z);
            }
        }
    }
    return 0;
}
