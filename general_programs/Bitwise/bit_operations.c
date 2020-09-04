#include <stdio.h>
#include <stdlib.h>

int dec_to_bin(int num)
{
	if(num == 0)
		return 0;
	dec_to_bin(num/2);
	printf("%d", num%2);
}
	
int set_bit_pos(int num, int pos)
{
	return (num |= (1 << pos));
}

int reset_bit_pos(int num, int pos)
{
	return (num &= ~(1 << pos));
}

int negate_bit_pos(int num, int pos)
{
	return (num ^= (1 << pos));
}

int main()
{
	int a , pos;
	printf("Enter number: ");
	fflush(stdin);
	scanf("%d", &a);
	printf("Enter position: ");
	scanf("%d", &pos);
	printf("\nBinary Number: ");
	dec_to_bin(a);
	printf("\nAfter set %dth pos num = %d ", pos, set_bit_pos(a, pos));
	printf("Binary Number: ");
	dec_to_bin(set_bit_pos(a, pos));
	printf("\nAfter reset %dth pos num = %d ", pos, reset_bit_pos(a, pos));
	printf("Binary Number: ");
	dec_to_bin(reset_bit_pos(a, pos));
	printf("\nAfter negate %dth pos num = %d ", pos, negate_bit_pos(a, pos));
	printf("Binary Number: ");
	dec_to_bin(negate_bit_pos(a, pos));
	
	return 0;
}
