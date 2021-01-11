
#include<stdio.h>

int fun()
{
    int *x = NULL;
    x = (int*)malloc(sizeof(int)*1);
    *x = 10;
    return x;
}

int main(void)
{
    int *p = fun();
    printf("%d\n", *p);
    *p = 20;
    printf("%d\n", *p);
    return 0;
}
