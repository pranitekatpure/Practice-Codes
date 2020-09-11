/* 
Input: n = 4
Output: 
	1 
	1 2
	1 2 3 
	1 2 3 4
*/


#include <stdio.h>

void pattern_print(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
			printf("%d\t", j);
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