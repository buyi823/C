#include <stdio.h>

int main(void)
{
    int age = 19;
    int*p_age = &age;
    *p_age  = 20;  //ͨ��ָ���޸�ָ����ڴ�����

    printf("age = %d",*p_age);   //ͨ��ָ���ȡָ����ڴ�����
    printf("age = %d",age);

    return 0;
}