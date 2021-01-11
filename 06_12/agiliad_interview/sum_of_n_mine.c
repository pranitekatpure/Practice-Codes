
#include<stdio.h>

int Sum(int n)
{
    static int sum = 0;
    static int res = 1;

    if (n==0)
        return sum;
    sum = sum + res;
    res++;
    Sum(--n);
    return sum;
}

int main(void)
{
    int n = 4;
    int res = Sum(n);
    printf("Sum is: %d\n", res);

    return 0;
}
