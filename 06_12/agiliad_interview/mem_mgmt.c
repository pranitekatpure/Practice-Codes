
#include<stdio.h>

int main(void)
{
    int *p = (int*)malloc(2*sizeof(int));
    p[0] = 10;
    p[1] = 20;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%x\n", p);
    printf("%x\n", (p+1));
    free(p);
    p = 0;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%x\n", p);
    printf("%x\n", (p+1));
    return 0;
}
