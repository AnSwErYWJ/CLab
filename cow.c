#include<stdio.h>
/*参考斐波那契原理，利用递归*/
int calcownum1(int years)
{
    int icownum=1;
    if(years==1||years==2||years==3)
        return icownum;
    if(years==4)
    {
        icownum=2;
        return icownum;
    };
    return calcownum1(years-1)+calcownum1(years-4);
}

int calcownum2(int years)
{
    int icownum=1;
    int i=1;
    for(i=1; i<=years; i++)
    {
        if(i>=4)
        {
            if((years-i)>=4)
                icownum+=calcownum2(years-i);
            else
            {
                icownum++;
            }
        }
    }
    return icownum;
}

int main(int argv,char *argc[])
{
    int years;
    printf("Input years:");
    scanf("%d",&years);
    printf("In %d years,there is %d cows",years,calcownum2(years));
    return 0;
}
