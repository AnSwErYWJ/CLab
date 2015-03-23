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
    struct tm time,*tm_ptr;
    time_t seconds;
    Date myDate;
    char *p;

    /*转换时间字符串*/
    p = strtok(test, "/");//字符串分割
    myDate.year=atoi(p);
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
    seconds=mktime(&time)+SECONDS_PER_DAY;  //转换tm结构为time_t类型值，并加一天

    /*转换并打印日期*/
    tm_ptr = gmtime(&seconds);
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
