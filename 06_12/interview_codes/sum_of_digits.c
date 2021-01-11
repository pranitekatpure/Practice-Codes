
#include<stdio.h>

int sumDigits(int n)
{
    int sum = 0, rem;
    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n /10;
    }
    return sum;
}

int main(void)
{
    int num, res = 0;
    printf("Enter the valid number:\t");
    scanf("%d",&num);
    res = sumDigits(num);

    printf("%d\n", res);
    return 0;
}

