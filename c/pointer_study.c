
#include <stdio.h>
int main(void)
{
    char ch = 'a';
    int  num = 97;
    printf("ch 的地址: %p\n",&ch);   //ch 的地址:0028FF47
    printf("num的地址: %p\n",&num);  //num的地址:0028FF40
    return 0;
}