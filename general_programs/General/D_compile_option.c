#include <stdio.h>
#include <stdlib.h>

int main()
{
	#ifdef DOption
		printf("D option included...");
	#endif
		printf("Default flow...");
	return 0;
}
