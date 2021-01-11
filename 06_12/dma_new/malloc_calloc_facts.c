
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *p = (int*) calloc(sizeof(int), 5);
    int i;
    for (i=0; i<5; i++)
    {
        p[i] = p[i] + 100;
        printf("%d\n", p[i]);
    }
    return 0;
}
