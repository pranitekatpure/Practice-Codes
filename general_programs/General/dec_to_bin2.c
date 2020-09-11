#include<stdio.h>

int dec_to_bin(unsigned num)
{
	if(num == 0)
		return 0;
	dec_to_bin(num/2);
	printf("%d", num % 2);
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