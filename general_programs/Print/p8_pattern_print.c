/* 
Input: n = 4
Output: 
	1 
	2	1
	3	2	1 
	4	3	2	1
*/

#include <stdio.h>

void pattern_print(int n)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j >= 1; j--)
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
