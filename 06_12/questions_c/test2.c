
#include<stdio.h>

static inline int fun()
{
    return 2;
}

int main(void)
{
    int res;
    res = fun();
    printf("Result is:%d\n", res);
    return 0;
}
