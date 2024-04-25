/* 
在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等
于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以
品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用
浮点类型比整数类型更合适？
*/
#include <stdio.h>

int main(void)
{
    // float cup;
    // printf("Please input you cup number: ");
    // scanf("%f\n", &cup);
    // printf("You cup number is %f\n. It's %.2f pint, %.2f ounce, %f soup_ladle, %f teaspoon. ", cup, cup/2, cup*8, cup*8*2, cup*8*2*3);
    // return 0;

// 定义各个单位之间的转换系数
    const float cups_per_pint = 2.0;
    const float ounces_per_cup = 8.0;
    const float tablespoons_per_ounce = 2.0;
    const float teaspoons_per_tablespoon = 3.0;

    // 定义变量存储用户输入的杯数
    float cups;

    // 提示用户输入杯数
    printf("请输入杯数：");
    // 读取用户输入的杯数
    scanf("%f", &cups);

    // 计算等价容量
    float pints = cups / cups_per_pint;
    float ounces = cups * ounces_per_cup;
    float tablespoons = ounces * tablespoons_per_ounce;
    float teaspoons = tablespoons * teaspoons_per_tablespoon;

    // 显示等价容量
    printf("%.2f 杯等于 %.2f 品脱， %.2f 盎司， %.2f 汤勺， %.2f 茶勺。\n", 
            cups, pints, ounces, tablespoons, teaspoons);

    return 0;

}