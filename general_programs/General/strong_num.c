/* Strong number
*	Number whose sum of factorial of its digits is number itself.
*	145 = 1! + 4! + 5!
*/

#include <stdio.h>

void is_strong(int n)
{
	if(n <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int sum = 0, fact = 1, num = n, r;
	while(num > 0)
	{
		r = num % 10;
		for(int i = r; i >= 1; i--)
			fact = fact*i;
		sum = sum + fact;
		num = num/10;
		fact = 1;
	}
	if(sum == n)
		printf("Number is strong number\n");
	else
		printf("Number is not strong number\n");
}

int main()
{
    int n;
	scanf("%d", &n);
	is_strong(n);
	
    return 0;
}