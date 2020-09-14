/* input n = 153
 1^3 + 5^3 + 3^3 = 153
*/

#include <stdio.h>

void is_armstrong(int n)
{
	if(n <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int temp, sum = 0, num = n;
	while(num > 0)
	{
		temp = num % 10;
		sum = sum + temp*temp*temp;
		num = num/10;
	}
	if(n == sum)
		printf("Number is armstrong\n");
	else
		printf("Number is not armstrong\n");
}

int main()
{
    int n;
	scanf("%d", &n);
	is_armstrong(n);
	
    return 0;
}