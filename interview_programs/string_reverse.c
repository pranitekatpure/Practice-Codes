#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "Pranit Ekatpure";
	printf("Before: %s\n", str);
	int i, j = 0;
	char temp;
	i = strlen(str);
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


