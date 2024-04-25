#include <stdio.h>
void change(int a)
{
    a++;
    printf("a = %d\n",a);      //在函数中改变的只是这个函数的局部变量a，而随着函数执行结束，a被销毁。age还是原来的age，纹丝不动。
}
int main(void)
{
    int age = 19;
    change(age);
    printf("age = %d",age);   // age = 19
    return 0;
}