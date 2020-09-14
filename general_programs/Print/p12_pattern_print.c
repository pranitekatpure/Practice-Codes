/* 
Input: n = 4
Output: 
				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*
*/

#include <stdio.h>

void pattern_print(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int k = i; k < n; k++)
			printf("\t");
		for(int j = 1; j <= (2*i - 1); j++)
			printf("*\t");
		printf("\n");
	}
}

int main()
{
    int n;
	scanf("%d", &n);
	pattern_print(n);
	
    return 0;
}
