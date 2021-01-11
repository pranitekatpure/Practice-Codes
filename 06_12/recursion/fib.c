#include<stdio.h>

int fib (int n)
{
    if (n < 0)
        return -1;
 /*   else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
*/
    else
    {
        int i, a = 0; b = 1, c;
        for (i = 0; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
    }
return a;        //return fib(n-1) + fib (n-2);
}

int main()
{
    int n = -10, res;
    res = fib (n);
    printf("The nth number in series is:%d\n", res);
    return 0;
}

