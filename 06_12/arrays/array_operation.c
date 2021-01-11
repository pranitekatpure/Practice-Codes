/*Program to input values into an array and display sum of elements*/
#include<stdio.h>

int main(void)
{
	int arr[5],i, sum = 0;

	for(i=0; i<5; i++)
	{
		printf("Enter a value for arr[%d] : ",i);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
    printf("Sum is :%d\t", sum);
	return 0;
}


