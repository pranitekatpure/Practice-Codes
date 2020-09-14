/* Perfect number
*	Number having its factors sum equal to number itself.*
	6 = 1 + 2 + 3  
*/

#include <stdio.h>

void is_perfect(int n)
{
	if(n <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if((n % i) == 0)
			sum = sum + i;
	}
	if(sum == n)
		printf("Number is perfect number\n");
	else
		printf("Number is not perfect number\n");
}

int main()
{
    int n;
	scanf("%d", &n);
	is_perfect(n);
	
    return 0;
}