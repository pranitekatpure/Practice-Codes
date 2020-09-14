/* Prime number
*	Number having two factors: 1 and number itself.
*/

#include <stdio.h>

void is_prime(int n)
{
	if(n <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if((n % i) == 0)
			count++;
	}
	if(count == 2)
		printf("Number is prime number\n");
	else
		printf("Number is not prime number\n");
}

int main()
{
    int n;
	scanf("%d", &n);
	is_prime(n);
	
    return 0;
}