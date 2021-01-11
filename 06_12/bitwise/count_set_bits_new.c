
#include<stdio.h>

int main(void)
{
    int n = -15;
    int count = 0;
    if (n < 0)
        printf("Please Enter Positive number\n");
    else
    {
        while (n > 0)
        {
            count = count + (n & 1);
            n = n >> 1;
        }

    printf("%d\n", count);
    }
    return 0;
}

