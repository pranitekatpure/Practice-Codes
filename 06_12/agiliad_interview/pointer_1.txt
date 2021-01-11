
#include<stdio.h>

void Print(int num)
{
    int res = 0;
    int rem;
    while(num > 0)
    {
        rem = num % 10;
        res = res * 10 + rem;
        num = num / 10;
    }

    while(res > 0)
    {
        printf("%d\n", res % 10);
        res = res / 10;
    }

}

int main(void)
{
    int n =1234;
    printf("Original Number: %d\n", n);

    Print(n);
    return 0;
}
