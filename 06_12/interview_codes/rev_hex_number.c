
#include<stdio.h>

int reverse(int n)
{
    int i = 0, res = 0, temp;
    int NO_OF_BITS = sizeof(n) * 8;
    for(i = 0; i < NO_OF_BITS; i++)
    {
        temp = (n & (1<<i));
        if (temp)
            res = res | (1 << ((NO_OF_BITS-1)-i));
    }

    return res;
}

int main(void)
{
    int n = 0x1234;
    printf("Original Number is: %x\n", n);
    //printf("Original Number is: %d\n", n);
    printf("Reversed Number is:%x\n",reverse(n));
    return 0;
}
