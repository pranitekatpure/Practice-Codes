
#include<stdio.h>

void dec_to_bin(int num)
{
    int bin[15], i=0;
    while(num > 0)
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j=i-1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");
}

int main(void)
{
    int n = 10;
    printf("Decimal Number is : %d\n", n);

    printf("Binary number is :\n");
    dec_to_bin(n);
    return 0;
}
