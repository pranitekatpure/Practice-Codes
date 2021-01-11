
#include<stdio.h>

#define ADD(a,b) (a+b)
static inline int fun(int a, int b)
{
    return a+b;
}

int main(void)
{
    int a = 10;
    int b = 20;
    int res, res1;
    res = ADD(a,b);
    printf("Result with MACRO: %d\n", res);

    res1 = fun(a, b);
    printf("Result with INLINE: %d\n", res1);
    return 0;
}
