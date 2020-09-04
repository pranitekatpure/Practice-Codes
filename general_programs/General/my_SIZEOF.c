#include <stdio.h>

#define SIZEOF(object) ((char*)(&object + 1) - (char*)(&object))

int main()
{
	char a;
	int b;
	short c;
	double d;
	printf("size of char is %d\n", SIZEOF(a));
	printf("size of int is %d\n", SIZEOF(b));
	printf("size of short is %d\n", SIZEOF(c));
	printf("size of double is %d\n", SIZEOF(d));
	printf("size of non-linear pointers diff %p - %p = %d\n", &d, &a, (double*)&a - (double*)&d);
	fprintf(stderr, "Error: failed\n\r");

	return 0;
}
