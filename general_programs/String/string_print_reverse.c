#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_print(char *cptr)
{
	if(cptr == NULL)
	{
		printf("Empty string\n");
		return;
	}
	if(*cptr)
	{
		reverse_print(cptr + 1);
		printf("%c", *cptr);
	}
}

int main()
{
	char str[] = "Pranit Ekatpure";
	printf("Before: %s\n", str);
	printf("After: ");
	reverse_print(NULL);
	exit(0);
}