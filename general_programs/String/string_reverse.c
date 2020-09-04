#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "Pranit Ekatpure";
	printf("Before: %s\n", str);
	int i = 0, j = 0;
	char temp;
	//i = strlen(str);
	while(str[i] != '\0')
		i++;
	i--;
	while(i > j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	printf("After: %s\n", str);

	exit(0);
}


