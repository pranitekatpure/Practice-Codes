

#include<stdio.h>

int reverse(unsigned int n)
{
    int i = 0, res = 0, temp;
    int NO_OF_BITS = sizeof(n) * 8;
    for(i = 0; i < NO_OF_BITS; i++)
    {
        if ((n & (1<<i)))
            res = res | (1 << ((NO_OF_BITS-1)-i));
    }

    return res;
}

int main(void)
{
    unsigned int n = 10;
    printf("Original Number is: %u\n", n);
    //printf("Original Number is: %d\n", n);
    printf("Reversed Number is:%u\n",reverse(n));
    return 0;
}
