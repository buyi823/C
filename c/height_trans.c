/* 1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英
寸），然后以厘米为单位显示身高。
*/
#include <stdio.h>

int main(void)
{
    float height_inch;
    float height_cm;
    printf("Please enter your height in inches: ");
     //scanf 函数中的格式字符串应该只包含格式说明符 %f，而不应该包含任何其他字符。因此，scanf 函数的调用应该是 scanf("%f", &height_inch);，而不是 scanf("%.2f\n", &height_inch);
    height_cm = 2.54 * height_inch;
    printf("Your height is %.2f: ", height_cm);
    scanf("%f\n", &height_inch);   
    //  定义1英寸对应的厘米数
    // double cm_per_inch = 2.54;
    // // 定义变量存储用户输入的身高（英寸）
    // double height_in_inch;

    // // 提示用户输入身高（英寸）
    // printf("请输入您的身高（英寸）：");
    // // 读取用户输入的身高（英寸）
    // scanf("%lf", &height_in_inch);

    // // 将身高从英寸转换为厘米
    // double height_in_cm = height_in_inch * cm_per_inch;

    // // 显示转换后的身高（厘米）
    // printf("您的身高是：%.2f厘米\n", height_in_cm);
    return 0;
}