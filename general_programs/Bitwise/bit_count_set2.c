#include <stdio.h>
#include <stdlib.h>

unsigned char count_set_bit(int num)
{
	unsigned char count = 0;
	while(num != 0)
	{
		num = num & (num - 1);
		count++;
	}
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