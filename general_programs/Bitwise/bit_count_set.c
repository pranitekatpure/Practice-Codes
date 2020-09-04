#include <stdio.h>
#include <stdlib.h>

unsigned char count_set_bit(int num)
{
	unsigned char count = 0;
	unsigned temp = (unsigned)num;
	while(temp != 0)
	{
		if(temp & 1)
			count++; 			// count = count + (temp & 1);
		temp = temp >> 1;
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