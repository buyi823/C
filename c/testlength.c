// strlen   sizeof

#include <stdio.h>
//#include <string.h>

int main(void)
{
    char character_A[10] = "abced";
    char character_array[10] = "abcde";
    // strlen() 实际变量有几个字符
    printf("character_A length: %zu\n", strlen(character_A)); 
    printf("character_array length: %zu\n", strlen(character_array)); 

    // use sizeof  变量在内存中占据的字符数
    printf("character_A length: %zu\n", sizeof(character_A)); 
    printf("character_array length: %zu\n", sizeof(character_array)); 

    // strlen不包含字符串最后的\0, siezof同理显示字符串在内存中的占位，包含最后的\0
    printf("character_A length: %zu\n", strlen("abced")); 
    printf("character_array length: %zu\n", sizeof("abcde")); 

    return 0;
}