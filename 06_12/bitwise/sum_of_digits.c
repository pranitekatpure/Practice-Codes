

#include<stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    if (n==0)
        return;
    else
    {
        int rem = n % 10;
        sum = sumOfDigits(n/10);
        sum = sum + rem;
        //printf("%d\n", sum);
    }
    return sum;
}

int main(void)
{
    int n = 10;
    int res = 0;
    res = sumOfDigits(n);
    printf("%d\n", res);
    return 0;
}

