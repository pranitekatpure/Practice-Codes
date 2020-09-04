#include <stdio.h>
#include <limits.h>

void smallest_first_two(int arr[], int n)
{
    if(n < 2)
	{
		printf("Invalid input.\n");
		return;
	}
	int first, second;
	first = second = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] < second && arr[i] != first)
			second = arr[i];
	}
	if(second == INT_MAX)
		printf("There is no second smallest number.\n");
	else
		printf("First = %d, second = %d", first, second);
}

int main(void)
{
    int arr[] = {2, 3, 4, 5, 1};
	int n = (sizeof(arr)/sizeof(int));
	smallest_first_two(arr, n);
	
    return 0;
}