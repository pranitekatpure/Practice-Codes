#include <stdio.h>

int is_power_of_two(int num)
{
	if(num < 0)
	{
		num = 0 - num;
		return (num & (num - 1));
	}
	return (num & (num - 1));
}

int main()
{
	int a;
	scanf("%d", &a);
	if(is_power_of_two(a))
		printf("Number is not power of 2\n");
	else	
		printf("Number is power of 2\n");
	
	return 0;
}