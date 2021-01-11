
#include<stdio.h>

int main(void)
{
    int *p = (int*) calloc(0, 0);
    printf("%d\n", *p);
    printf("%d\n", p);
    return 0;
}
