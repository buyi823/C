#include <stdio.h>

int main()
{
    for (int i = 0; i < 660; ++i){
        putchar(i%33==32?'\n':pow(i%33/16.0-1,2)+pow(1.5-i/33/8.0-pow(pow(i%33/16.0-1,2),1.0/3),2)<1?'#':' ');
    }
}