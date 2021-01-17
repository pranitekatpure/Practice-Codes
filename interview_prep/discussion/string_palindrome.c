#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
input = a  b  a  b  a
		start  		end
		0  1  2  3  4
*/

void is_palindrome(char str[], int start, int end)
{
	while(start < end)
	{
		if(str[start++] != str[end--])
		{
			break;
		}
	}
	if(start < end)
	{
		printf("Not Palindrome");
	}
	else
	{
		printf("Palindrome");
	}
}

int main()
{
	char str[] = "";
	int start = 0;
	int end = strlen(str);
	if(end == 0)
	{
		printf("Empty String\n");
		return -1;
	}
	
	is_palindrome(str, start, end-1);
	return 0;
}
