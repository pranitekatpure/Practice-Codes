#include<stdio.h>

unsigned char digit_count1(int num)
{
	if(num == 0)
		return 0;
	return 1 + digit_count1(num/10);
}

unsigned char digit_count(int num)
{
	if(num == 0)
		return 1;
	return digit_count1(num);
}

int main(void)
{
    int n;
	scanf("%d", &n);
    printf("Number is : %d\n", n);

    printf("Digits in the number are: %d\n", digit_count(n));

    return 0;
}