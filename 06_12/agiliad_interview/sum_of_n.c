/* INPUT = 4
   OUTPUT = 10 (1 + 2 + 3 + 4) */

#include<stdio.h>

int Sum(int num)
{
    if (num==0)
        return num;

    return (num + Sum(num - 1));
}

int main(void)
{
    int n = 4;
    printf("Number is :%d\n", n);
    int res = Sum(n);
    printf("Sum is :%d\n", res);
    return 0;
}
