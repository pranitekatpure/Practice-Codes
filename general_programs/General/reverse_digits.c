/* input n = 123
   output 321
*/

#include <stdio.h>

void reverse_digits(int num)
{
	if(num <= 0)
	{
		fprintf(stderr, "ERROR: invalid number\n");
		return;
	}
	int temp, sum = 0;
	while(num > 0)
	{
		temp = num % 10;
		sum = (sum*10) + temp;
		num = num/10;
	}
	printf("Number after digits reversal: %d\n", sum);
}

int main()
{
    int n;
	scanf("%d", &n);
	reverse_digits(n);
	
    return 0;
}