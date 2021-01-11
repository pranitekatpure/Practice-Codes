
#include <stdio.h>
#include <string.h>

void is_palindrome(char str[])
{
	int len = strlen(str)-1;
	int iter;
	for(iter = 0; iter <= len; iter++)
	{
		while(str[iter] != str[len])
		{
			break;
		}
	}
	
	if(iter > len)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}

int main(void)
{
	char str[] = "aba";
	is_palindrome(str);
	return 0;
}
