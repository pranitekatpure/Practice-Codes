
#include<stdio.h>

int main(void)
{
    int n = 10;
    int even_bits, odd_bits, res;

    even_bits = n & 0xAAAAAAAA;
    even_bits = even_bits >>1;
    printf("%d\n", even_bits);

    odd_bits = n & 0x55555555;
    odd_bits = odd_bits <<1;
    printf("%d\n", odd_bits);

    res = even_bits | odd_bits;
    printf("Number before bit swapping :%d\n", n);
    printf("Number after swapping is :%d\n", res);
    return 0;
}
