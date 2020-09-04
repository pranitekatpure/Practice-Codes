#include<stdio.h>

void dec_to_bin(int num)
{
    unsigned char bin[32], i=0;
	unsigned unum = (unsigned)num;
    while(unum != 0)
    {
        bin[i] = unum % 2;
        unum = unum / 2;
        i++;
    }

    for (int j=i-1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");
}

int main(void)
{
    int n;
	scanf("%d", &n);
    printf("Decimal Number is : %d\n", n);

    printf("Binary number is :\n");
    dec_to_bin(n);
    return 0;
}