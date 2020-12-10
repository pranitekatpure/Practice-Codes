/* Strong number
*	Number whose sum of factorial of its digits is number itself.
*	145 = 1! + 4! + 5!
*/

#include <stdio.h>

int factorial(int n)
{
	int fact = 1;
	for(int i = n; i >= 1; i--)
		fact = fact*i;
	return fact;
}

int factorial1(int n)
{
	if(n == 0)
		return 1;
	return (n * factorial1(n-1));
}

int main()
{
    int n;
	scanf("%d", &n);
	printf("Factorial of number is: %d\n",factorial(n));
	printf("Factorial of number is rec: %d\n",factorial1(n));
	
    return 0;
}