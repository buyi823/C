/* print2.c--更多printf()的特性 */
#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65535;
    long long verybig = 12345678908642;
    printf("un = %u and not %d\n", un,un);
    printf("end = %hd and %d\n", end,end);
    printf("big = %ld and not %hd\n", big,big);
    printf("verybig = %lld and not %ld\n", verybig,verybig);
    printf("=========================\n");
	int a = 123, b = 123456;
	printf("%5d\n", a);		// 默认右对齐，且最少取5位整数，多余5位全取，不足5位使用空格左面补全
	printf("%05d\n", a);	// 使用0代替空格，在左边补齐位数
	printf("%-5d\n", a);	// 左对齐，不足位数，使用空格补全
	printf("%-05d\n", a);	// 左对齐，不足位数，还是用空格补全
	printf("%5d\n", b);		// 超过5位全取

    return 0;
}