#include <stdio.h>
#include <stdlib.h>

void is_palindrome(int num)
{
	int res = 0, rem;
	int temp = num;
	while(temp != 0)
	{
		rem = temp % 10; 
		res = (res * 10) + rem;
		temp = temp / 10;
	}
	if(num == res)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}

int main()
{
	int num = 121;
	if(num <= 0)
	{
		printf("Invalid Number\n");
		return -1;
	}
	
	is_palindrome(num);
	return 0;
}
