#include <stdio.h>

void is_palindrome(int n)
{
	if(n <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int temp, sum = 0, num = n;
	while(num > 0)
	{
		temp = num % 10;
		sum = (sum * 10) + temp;
		num = num/10;
	}
	if(n == sum)
		printf("Number is Palindrome\n");
	else
		printf("Number is not Palindrome\n");
}

int main()
{
    int n;
	scanf("%d", &n);
	is_palindrome(n);
	
    return 0;
}