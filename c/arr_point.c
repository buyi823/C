
#include <stdio.h>
int main(void)
{
    int arr[3] = {1,2,3};

    int*p = arr;
    printf("sizeof(arr)=%lu\n",sizeof(arr));  //sizeof(arr)=12
    printf("sizeof(p)=%d",sizeof(p));   //sizeof(p)=4  �� 64 λϵͳ��ͨ���� 8 ���ֽ�

    return 0;
}