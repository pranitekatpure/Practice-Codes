#include <stdio.h>
#include <stdlib.h>

void main()
{
	/******* method 1 *******/
	unsigned int i = 1;
	char *c = (char*)&i;
	if(*c)
		printf("Little endian\n");
	else
		printf("Big endian\n");
	
	/******* method 2 *******/
	int n = 1;
	void *ptr = &n;
	if(*(char*)ptr)
		printf("Little endian\n");
	else
		printf("Big endian\n");
/*	union
	{
		short s;
		char c[sizeof(short)];
	}un;

	un.s = 0x0102;
	printf(" CPU_VENDOR_OS ");

	if(sizeof(short) == 2)
	{
		if(un.c[0] == 1 && un.c[1] == 2)
			printf("big-endian\n");
		else if(un.c[0] == 2 && un.c[1] == 1)
			printf("little-endian\n");
		else
			printf("unknown\n");
	}
	else
	{
		printf("sizeof(short) = %ld\n", sizeof(short));
	}
	getchar();
*/
	exit(0);
}
				

