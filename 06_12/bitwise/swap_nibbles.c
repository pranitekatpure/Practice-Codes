/*
INPUT : 10  - 0000 1010
OUTPUT:
1 Bits swap: 5   - 0000 0101
4 Bits swap: 10  - 0000 1010
4 Bits swap: 160 - 1010 0000
*/

#include<stdio.h>

int swap_bit(int n)
{
    int res = 0;
    res = ((n & 0xAAAAAAAA)>>1) | ((n & 0x55555555)<<1);
    return res;
}

int swap_2bits(int n)
{
    int res = 0;
    res = ((n & 0xcccccccc)>>2) | ((n & 0x33333333)<<2);
    return res;
}

int swap_4bits(int n)
{
    int res = 0;
    res = ((n & 0xf0f0f0f0)>>4) | ((n & 0x0f0f0f0f)<<4);
    return res;
}

int swap_8bits(int n)
{
    int res = 0;
    res = ((n & 0xf000f000)>>8) | ((n & 0x000f000f)<<8);
    return res;
}
int main(void)
{
    int n = 1, res1, res2, res3, res4;
    printf("Number before swapping: %d\n", n);
    res1 = swap_bit(n);
    printf("Number after swapping bits: %d\n", res1);

    res2 = swap_2bits(n);
    printf("Number after swapping 2 bits: %d\n", res2);

    res3 = swap_4bits(n);
    printf("Number after swapping 4 bits: %d\n", res3);

    res4 = swap_8bits(n);
    printf("Number after swapping 8 bits: %d\n", res4);

    return 0;
}
