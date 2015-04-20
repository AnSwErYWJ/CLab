#include <stdio.h>

int main(void)
 {
     int answer;
    /* ANSI C标准中有几个标准预定义宏（也是常用的）：
    __LINE__：在源代码中插入当前源代码行号；
    __FILE__：在源文件中插入当前源文件名；
    __DATE__：在源文件中插入当前的编译日期
    __TIME__：在源文件中插入当前编译时间；
    __STDC__：当要求程序严格遵循ANSI C标准时该标识被赋值为1；
    __cplusplus：当编写C++程序时该标识符被定义。*/

    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("File : %s\n", __FILE__);
    printf("Line : %d\n", __LINE__);
    printf("Enter 1 or 0 : ");
    scanf("%d", &answer);

    // 这是一个条件表达式
    printf("%s\n", answer?"You sayd YES":"You said NO");

    // 各种数据类型的长度
    printf("The size of int %d\n", sizeof answer);
    printf("The size of short %d\n", sizeof(short));
    printf("The size of long %d\n", sizeof(long));
    printf("The size of float %d\n", sizeof(float));
    printf("The size of double %d\n", sizeof(double));
    printf("The size of long double %d\n", sizeof(long double));
    printf("The size of char %d\n", sizeof(char));
}
