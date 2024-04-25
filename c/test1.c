#include <stdio.h>

int main(void)
{
    int a, b;
    int age;
    a = 5;
    b = 2;
    b = a;
    a = b;
    age = 39*365;
    printf("%d %d\n", b, a);
    printf("My name is Blaine Xu. ");
    printf("My age is %d.", age); 
    return 0;

}