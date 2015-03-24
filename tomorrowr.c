#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SECONDS_PER_DAY (60*60*24)

typedef struct date
{
    unsigned year;
    unsigned month;
    unsigned day;
} Date;

void nextDay(char *test)
{
    struct tm time,*tm_ptr;//tm结构体
    time_t seconds;
    Date myDate;
    char *p;

    /*转换时间字符串*/
    p = strtok(test, "/");//字符串分割
    myDate.year=atoi(p);//字符串转换为数字
    p = strtok(NULL, "/");
    myDate.month=atoi(p);
    p = strtok(NULL, "/");
    myDate.day=atoi(p);

    /*填充struct tm*/
    time.tm_year = myDate.year - 1900;
    time.tm_mon  = myDate.month - 1;
    time.tm_mday = myDate.day;
    time.tm_hour = 12; //默认为该日12:00:00
    time.tm_min  = 0;
    time.tm_sec  = 0;
    seconds=mktime(&time)+SECONDS_PER_DAY;  //转换tm结构为time_t类型值，并加一天.mktime()用来将参数timeptr所指的tm结构数据转换成从公元1970年1月1日0时0分0 秒算起至今的UTC时间所经过的秒数

    /*转换并打印日期*/
    tm_ptr = gmtime(&seconds);//gmtime()将参数timep 所指的time_t 结构中的信息转换成真实世界所使用的时间日期表示方法，然后将结果由结构tm 返回。
    printf("%d/%d/%d\n",tm_ptr->tm_year+1900, tm_ptr->tm_mon+1, tm_ptr->tm_mday);
}

int main()
{
    char strTime[20];

    printf("Please input the date : ");
    scanf("%s",strTime);

    nextDay(strTime);

    return 0;
}
