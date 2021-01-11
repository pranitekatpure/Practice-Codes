/* Sum of digits */

#include<stdio.h>


int sum_of_digits(int num)
{
	int sum = 0;
	
	{
		while(num > 0)
		{
			int rem = sum % 10;
			sum += rem;
			num = num / 10;
			printf("%d\n", sum);
		}
	}
	return sum;
}

int main(void)
{
	int num = 112;
	int res = 0;
	
	res = sum_of_digits(num);
	printf("%d ", res);
	return 0;
}


