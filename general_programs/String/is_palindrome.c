/* "abba" palindrome
"abcd" not plindrome */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void isPalindrome(char str[])
{
	int i = 0, j = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(i > j)
	{
		if(str[i--] != str[j++])
		{
			printf("String is not palindrome.\n");
			return;
		}
	}
	printf("String is palindrome.\n");
}

int main()
{
	char str[] = "malayalam";
	isPalindrome(str);
	exit(0);
}


