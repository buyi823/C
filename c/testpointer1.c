#include <stdio.h>
void change(int a)
{
    a++;
    printf("a = %d\n",a);      //�ں����иı��ֻ����������ľֲ�����a�������ź���ִ�н�����a�����١�age����ԭ����age����˿������
}
int main(void)
{
    int age = 19;
    change(age);
    printf("age = %d",age);   // age = 19
    return 0;
}