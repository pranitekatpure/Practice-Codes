#include<stdio.h>

void bin_to_dec(unsigned num)
{
	unsigned temp, base = 1, last_digit, dec_num = 0;
	temp = num;
	while(temp != 0)
	{
		last_digit = temp % 10;
		temp = temp/10;
		dec_num = dec_num + last_digit*base;
		base = base*2;
	}
	printf("%d", dec_num);
}

int main(void)
{
    unsigned n;
	scanf("%d", &n);
    printf("Binary Number is : %d\n", n);

    printf("Decimal number is :\n");
    bin_to_dec(n);
    return 0;
}