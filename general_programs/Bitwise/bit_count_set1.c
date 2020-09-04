#include <stdio.h>
#include <stdlib.h>

#define CHAR_SIZE 8
#define MAX_BITS (sizeof(int)*CHAR_SIZE)

unsigned char count_set_bit(int num)
{
	unsigned char count = 0, i;
	for(i = 0; i < (MAX_BITS - 1); i++)
		(num & (1 << i)): ++count? ;
	return count;
}

int main()
{
	int a;
	printf("Enter number: ");
	fflush(stdin);
	scanf("%d", &a);
	printf("set bit count is:%d\n", count_set_bit(a));
	
	return 0;
}