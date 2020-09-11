/* 
Input: n = 4
Output: 
			1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4

*/


#include <stdio.h>

void pattern_print(int n)
{
	int val;
	for(int i = 1; i <= n; i++)
	{
		val = i;
		for(int k = 1; k <= (n - i); k++)
			printf("\t");
		for(int j = 1; j <= (2*i -1); j++)
		{
			if(j <= ((2*i - 1)/2))
				printf("%d\t", val++);
			else if(j == ((2*i - 1)/2 + 1))
				printf("%d\t", val);
			else
				printf("%d\t", --val);
		}
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