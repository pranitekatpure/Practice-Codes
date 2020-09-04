#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverse(char *str, int i, int j);

void main()
{
	char str[] = "Pranit_Ekatpure";
	printf("\nThe original string is: %s\n", str);
	reverse(str, 0, (strlen(str)-1));
	printf("The reversed string is: %s\n", str);
}

void reverse(char *str, int i, int j)
{
	if(str == NULL)
	{
		printf("Empty string\n");
		return;
	}
	char temp;
	if(i > j)
		return;
	
	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
	reverse(str, ++i, --j);
}
