#include <stdio.h>

int main(void)
{
    int age = 19;
    int*p_age = &age;
    *p_age  = 20;  //通过指针修改指向的内存数据

    printf("age = %d",*p_age);   //通过指针读取指向的内存数据
    printf("age = %d",age);

    return 0;
}