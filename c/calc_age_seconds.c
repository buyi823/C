/*一年大约有3.156×10
7秒。编写一个程序，提示用户输入年龄，然后显
示该年龄对应的秒数*/

#include <stdio.h>

int main() {
    // 定义一年的秒数
    double seconds_per_year = 3.156e7;
    // 定义变量存储用户输入的年龄
    int age;

    // 提示用户输入年龄
    printf("请输入您的年龄：");
    // 读取用户输入的年龄
    scanf("%d", &age);

    // 计算年龄对应的秒数
    double age_in_seconds = age * seconds_per_year;

    // 显示年龄对应的秒数
    printf("您的年龄对应的秒数是：%.2f\n", age_in_seconds);

    return 0;
}