# include <string.h>
# include <stdio.h>

void replace_char(char *str, char ch, char new_char)
{
	int i = 0, j = 0;
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] == ch)
			str[i] = new_char;
	}
	//str[j] = '\0';
}

int main(void)
{
	char str[] = "Santosh Jadhav";
	char ch = 'a';
	char new_char = 'h';
	printf("Original String: %s/n", str);
	replace_char(str, ch, new_char);
	printf("Modified String: %s/n", str);
	return 0;
}

