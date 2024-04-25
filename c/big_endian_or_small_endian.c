/********************************************************************************
* @File name: endian.c
* @Author: Blaine refer to https://blog.csdn.net/hansionz/article/details/80871921
* @Version: 1.1
* @Date: 2023-4-7
* @Description: Determine whether the system is big-endian or small-endian
********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
算法思路：取出i的地址，强制类型转换为char*(char*只能访问1个字节)，
在进行解引用操作就可以访问到存储的数据，如果为0，则是大端，如果为1，则是小端
大端
1   2   3   4
00  00  00  01
小端
1   3   3   4
01  00  00  00
*/

int check_sys()
{
    int i = 1;
    return (*((char*)&i));
    //返回1表示小端 big-endian
    //返回0表示大端 little-endian
}

int main()
{
    int ret = check_sys();
    if (1 == ret)
    {
        printf("little-endian\n");
    }
    else
    {
        printf("big-endian\n");
    }
    system("pause");
    return 0;
    
}