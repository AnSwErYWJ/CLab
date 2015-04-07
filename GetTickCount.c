#include<stdio.h>
#include<windows.h>//获取开机时间要用到 GetTickCount() 这个 API,返回值为ms
int main()
{
    DWORD ms=GetTickCount();//DWORD 就是 Double Word， 每个word为2个字节的长度，DWORD 双字即为4个字节，每个字节是8位，共32位
    int s=ms/1000,m=0,h=0;
    if(s>=60)
    {
        m=s/60;
        s=s%60;
    }
    if(m>=60)
    {
        h=m/60;
        m=m%60;
    }
    printf("系统开启了: %d 小时 %d 分钟 %d 秒\n",h,m,s);
    return 0;
}
