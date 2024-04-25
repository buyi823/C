#include <stdio.h>

void test(){
    int i = 100;
    printf("i-----%i\n",i);
    printf("&i----%p\n",&i);

    int *a;
    printf("a-------%p\n",a);
    printf("&a------%p\n",&a);

    a = &i;
    printf("a--------%p\n",a);

    int **p;
    p = &a;
    printf("p----------%p\n",p);
    printf("*p---------%p\n",*p);
    printf("&p---------%p\n",&p);

    char str[12] = {"hello world"};
    printf("%s",str);
}

int main(int argc, const char * argv[]){
    test();

    return 0;
}