# include <string.h>
# include <stdio.h>

void del_char(char *str, char ch)
{
	int i = 0, j = 0;
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] != ch)
			str[j++] = str[i];	
	}
	str[j] = '\0';
}

int main(void)
{
	char str[] = "Santosh Jadhav";
	char char = 'a';
	printf("Original String: %s/n", str);
	del_char(str, char);
	printf("Modified String: %s/n", str);
	return 0;
}

