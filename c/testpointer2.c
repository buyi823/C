#include <stdio.h>
void change(int* pa)
{
    (*pa)++;   //��Ϊ���ݵ���age�ĵ�ַ�����paָ���ڴ�����age�����ں����ж�ָ��pa���ַʱ��
               //��ֱ��ȥ�ڴ����ҵ�age������ݣ�Ȼ�������1��
}
int main(void)
{
    int age = 19;
    change(&age);
    printf("age = %d",age);   // age = 20
    return 0;
}