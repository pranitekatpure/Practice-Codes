/* 
Input: n = 4
Output: 
	4	4	4	4 
	3	3	3
	2	2 
	1
*/

#include <stdio.h>

void pattern_print(int n)
{
	for(int i = n; i >= 1; i--)
	{
		for(int j = i; j >= 1; j--)
			printf("%d\t", i);
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
