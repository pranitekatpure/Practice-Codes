#include<stdio.h>

unsigned char digit_count(int num)
{
	unsigned char count = 0;
	if(num == 0)
		return 1;
	while(num != 0)
	{
		num = num/10;
		count++;
	}
	return count;
}

int main(void)
{
    int n;
	scanf("%d", &n);
    printf("Number is : %d\n", n);

    printf("Digits in the number are: %d\n", digit_count(n));

    return 0;
}