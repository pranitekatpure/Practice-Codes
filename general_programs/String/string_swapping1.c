#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_string(char *str1, char *str2)
{
	if(str1 == NULL || str2 == NULL)
		return;
	
	char *temp = (char*)malloc((strlen(str1) > strlen(str2) ? strlen(str1): strlen(str2))*sizeof(char));;
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	free(temp);
}

int main()
{
	char str1[] = "abcdsdafdsaf", str2[] = "efghdfah";
	printf("%ld %ld\n", sizeof(&str1), sizeof(str1));
	printf("Before: str1- %s, str2- %s\n", str1, str2);
	
	swap_string(str1, str2);
	
	printf("After: str1- %s, str2- %s\n", str1, str2);

	exit(0);
}


