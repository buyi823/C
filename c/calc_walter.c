/* 1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。编写一个
程序，提示用户输入水的夸脱数，并显示水分子的数量。*/
#include <stdio.h>

int main(void)
{
// 定义水分子的质量（克）
    double molecule_mass = 3.0e-23;
    // 定义1夸脱水的质量（克）
    double quart_mass = 950.0;
    // 定义1夸脱水中所含的水分子数量
    double molecules_per_quart;

    // 提示用户输入水的夸脱数
    printf("请输入水的夸脱数：");
    // 读取用户输入的夸脱数
    scanf("%lf", &molecules_per_quart);

    // 计算水分子的数量
    double molecules = molecules_per_quart * quart_mass / molecule_mass;

    // 显示水分子的数量
    printf("水分子的数量为：%e\n", molecules);

    return 0;

}