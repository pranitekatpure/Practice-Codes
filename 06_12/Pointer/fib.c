#include<stdio.h>

int fib (int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib (n-2);
}

int main()
{
    int n = 10, res;
    res = fib (n);
    printf("The nth number in series is:%d\n", res);
    return 0;
}
