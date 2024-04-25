/* toobig.c-- 超出系统允许的最大int值*/
/*
可以把无符号整数j看作是汽车的里程表。当达到它能表示的最大值
时，会重新从起始点开始。整数 i 也是类似的情况。它们主要的区别是，在
超过最大值时，unsigned int 类型的变量 j 从 0开始；而int类型的变量i则从
?2147483648开始。注意，当i超出（溢出）其相应类型所能表示的最大值
时，系统并未通知用户。因此，在编程时必须自己注意这类问题。

*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d, %d, %d\n",i, i+1, i+2);
    printf("%u, %u, %u\n",j, j+1, j+2);
    // sizeof(type) 得到对象或类型的存储字节大小
    printf("int 存储大小 : %lu \n", sizeof(int));
    return 0;

}