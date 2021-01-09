#include <stdio.h>
#include <limits.h>

void largest_first_two(int arr[], int n)
{
    if(n < 2)
	{
		printf("Invalid input.\n");
		return;
	}
	int first, second;
	first = second = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] != first)
		{
			second = arr[i];
		}
	}
	if(second == 0)
		printf("There is no second largest number.\n");
	else
		printf("First = %d, second = %d", first, second);
}

int main(void)
{
    int arr[] = {2, 3, 6, 10, 4, 9};
	int n = (sizeof(arr)/sizeof(int));
	largest_first_two(arr, n);
	
    return 0;
}