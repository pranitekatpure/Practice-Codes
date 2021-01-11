# include <stdio.h>
# include <string.h>

void rev(char *str, int start, int end)
{
	while(start < end)
	{
		char temp = *(str+start);
		*(str+start) = *(str+end);
		*(str+end) = temp;
		start++;
		end--;
	}
}

int main(void)
{
	char str[100];
	int i = 0;
	int j;
	printf("Enter the String:\n");
	gets(str);
	
	j = strlen(str)-1;
	rev(str, i, j);

	printf("Modified String: %s\n", str);
	
	return 0;
}

