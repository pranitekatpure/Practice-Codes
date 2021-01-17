/* "abba" palindrome
"abcd" not plindrome */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void is_palindrome(char str[], int start, int end)
{
	while(start < end)
	{
		if(str[start++] != str[end--])
		{
			printf("String is not palindrome.\n");
			return;
		}
	}
	printf("String is palindrome.\n");
}

int main()
{
	char str[] = "ababa";
	int start = 0;
	int end = strlen(str);
	if(end <= 0)
	{
		printf("Empty String\n");
		return -1;
	}
	is_palindrome(str, start, end-1);
	return 0;
}


