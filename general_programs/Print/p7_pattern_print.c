/* 
Input: n = 4
Output: 
	4 
	4	3
	4	3	2 
	4	3	2	1
*/

#include <stdio.h>

void pattern_print(int n)
{
	for(int i = n; i >= 1; i--)
	{
		for(int j = n; j >= i; j--)
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
