#include <stdio.h>

void find_two_missing_num(int arr[], int n)
{
	int sum1, sum2 = 0, avg, diff, num1, num2, temp = 0;
	sum1 = (n+2)*(n+3)/2;
	for(int i = 0; i < n; i++)
		sum2 = sum2 + arr[i];
	diff = sum1 - sum2;
	avg = diff/2;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] <= avg)
			temp = temp + arr[i];
	}
	num1 = avg*(avg + 1)/2 - temp;
	num2 = diff - num1;
	printf("%d %d", num1, num2);
}

int main()
{
	int arr[] = {1,3,4,6};
	find_two_missing_num(arr, (sizeof(arr)/sizeof(int)));

	return 0;
}
