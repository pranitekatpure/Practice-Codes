
#include<stdio.h>
#define CHAR_SIZE 8
#define INT_MAX (sizeof(int)*CHAR_SIZE)

void dec_to_bin_bit(int num)
{
    for(int i =INT_MAX-1; i>=0; i--)
    {
        (num & (1<<i)) ? printf("1") : printf("0");
    }
}

int main(void)
{
    int n = -2;
    printf("Decimal number is:%d\n", n);

    printf("Binary number is:\n");
    dec_to_bin_bit(n);

    return 0;
}
