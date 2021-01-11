
#include<stdio.h>

int countDigits(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n /10;
        count++;
    }
    return count;
}

int main(void)
{
    int num, res = 0;
    printf("Enter the valid number:\t");
    scanf("%d",&num);
    res = countDigits(num);

    printf("%d\n", res);
    return 0;
}
