#include <stdio.h>

void find_missing_num(int arr[], int n)
{
	int total;
	if(n == 0)
	{
		printf("Empty array\n");
		return;
	}
	total = ((n + 1)*(n + 2))/2;
	for(int i = 0; i < n; i++)
		total = total - arr[i];
	printf("Missing number is: %d\n", total);
}

int main()
{
	int arr[] = {1,2,3,4,6};
	find_missing_num(arr, (sizeof(arr)/sizeof(int)));

	return 0;
}
