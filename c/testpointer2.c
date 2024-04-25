#include <stdio.h>
void change(int* pa)
{
    (*pa)++;   //因为传递的是age的地址，因此pa指向内存数据age。当在函数中对指针pa解地址时，
               //会直接去内存中找到age这个数据，然后把它增1。
}
int main(void)
{
    int age = 19;
    change(&age);
    printf("age = %d",age);   // age = 20
    return 0;
}