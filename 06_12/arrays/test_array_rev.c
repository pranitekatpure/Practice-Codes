/* Array reverse */

#include<stdio.h>
#include<string.h>

void print_array(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse_array(int arr[], int start, int end)
{
	int temp;
		
	while(start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int end = sizeof(arr) /sizeof(arr[0]);
	int start = 0;
	printf("Original Array: \t");
	print_array(arr, );
	reverse_array(arr, start, end - 1);
	printf("Reversed Array: \t");
	return 0;
}