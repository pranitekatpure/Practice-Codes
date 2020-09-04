// Input: Pranit Ekatpure
// Output: Ekatpure Pranit

#include <stdio.h>
#include <string.h>

void print_words_reverse(char *str)
{
	if(str == NULL)
	{
		printf("String is empty\n");
		return;
	}
	int len = strlen(str);
	for(int i = (len - 1); i >=0; i--)
	{
		if(str[i] == ' ')
		{
			str[i] = '\0';
			printf("%s", &str[i] + 1);
			printf(" ");
		}
	}
	printf("%s", str);
	
	for(int i = 0; i < len; i++)
	{
		if(str[i] == '\0')
		{
			str[i] = ' ';
		}
	}
}

int main()
{
	char str[] = "Pranit Ekatpure";
	print_words_reverse(str);
	printf("\n%s", str);
	return 0;
}