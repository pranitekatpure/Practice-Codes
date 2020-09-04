#include<stdio.h>

#define CHAR_SIZE 	8
#define MAX_BITS	(sizeof(int)*CHAR_SIZE)
void dec_to_bin(int num)
{
	for(int i = (MAX_BITS - 1); i >= 0; i--)
		(num & (1 << i))? printf("1"):printf("0");
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