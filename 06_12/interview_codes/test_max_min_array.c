
#include<stdio.h>

void max_min_array(int arr[], int size)
{
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	printf("Max Element: %d\n", max);
	printf("Min Element: %d\n", min);
}

int main(void)
{
	int arr[] = {9, -1, 2, 10, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	max_min_array(arr, size);
	return 0;
}
