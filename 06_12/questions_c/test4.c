
#include<stdio.h>

int main(void)
{
    int a = 1;
    int b = 0;
    int c = 0;
    int d = 0;

    if (b==0 && d==0 )
        (a == c) ? printf("1") : printf("0");
    else if (b==0 && d!=0)
        printf("0");
    else
        ((a/b) == (c/d)) ? printf("1") : printf("0");

    return 0;
}
