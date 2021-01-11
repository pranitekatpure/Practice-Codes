#include<stdio.h>

void count_set_bits(int n)
{
	int count = 0;
	
	if(n < 0)
		printf("ERROR");
	else
	{
		while(n > 0)
		{
			//n = n & (n-1);
			//count++;
			count = count + (n & 1);
			n = n >> 1;
		}
	}
	printf("%d\n", count);
}

int main(void)
{
	int num = 0;

	count_set_bits(num);
	
	return 0;
}
