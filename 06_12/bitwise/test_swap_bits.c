/* swap bits */

#include<stdio.h>

int swap_bits(int n)
{
	int even_bits;
	int odd_bits;
	int res;
	
	even_bits = n & 0xAAAAAAAA;
	even_bits = even_bits >> 1;
	
	odd_bits = n & 0x55555555;
	odd_bits = odd_bits << 1;
	
	res = even_bits | odd_bits;
	return res;
}

int main(void)
{
	int num = 100; //1010
	int res; //0101 = 5
	printf("Original Number: %d\n", num);
	
	res = swap_bits(num);
	printf("Modified Number: %d\n`", res);
	return 0;
}





