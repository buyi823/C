
/*
overflow
当计算导致数字过大，超过当前类型能表达的范围时，就会发生上溢
float toobig = 3.4E38 * 100.0f;
以十进制为例，把一个有4位有效数字的数（如，0.1234E-10）除以10，得到的结果是0.0123E-10。
虽然得到了结果，但是在计算过程中却损失了原末尾有效位上的数字。这种情况叫作下溢（underflow）
*/
#include <stdio.h>

int main(void)
{
    //整型，4 个字节，取值范围 -2147483648 到 2147483647。
    int a = 2147483647;
    int b = 2147483648;
    int c = -2147483648;
    float toobig = 3.4E38 * 100.0f;
    float _underflow = 0.1234E-10;
    printf("a+b=%d\n",a+b);
    printf("c-a=%d\n",c-a);
    printf("%e\n", toobig);
    printf("%e\n", _underflow/100);

}