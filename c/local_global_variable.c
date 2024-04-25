/*例程1.1*/
#include <stdio.h>

int main()
{
	int a1 = 5;
	int a2 = 5.2;
	int b1 = 15;
	int b2 = 15.6;
	printf("%d\n", b2 / a1);//当 '/'号左边为浮点数，右边为整数时，结果为小数
	printf("%d\n", b1 / a2);//当 '/'号左边为整数，右边为浮点数时，结果为小数
	printf("%d\n", b1 / a1);//当 '/'号左边为整数，右边为整数时，结果为整数
	int c = 16;
	printf("%d\n", a1 % b1);//%取余运算（取模运算）--- 两边必须为整数
	printf("%d\n", c % a1);//%取余运算（取模运算）--- 两边必须为整数
	return 0;
}
