#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_string(char **str1, char **str2)
{
	if(str1 == NULL || str2 == NULL)
		return;
	
	char *temp;
	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int main()
{
	char *str1 = "abcd", *str2 = "efgh";
	printf("Before: str1- %s, str2- %s\n", str1, str2);
	
	swap_string(&str1, &str2);
	
	printf("After: str1- %s, str2- %s\n", str1, str2);

	exit(0);
}


