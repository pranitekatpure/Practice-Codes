/* Quick sort. 
*  Array - 7 2 4 1 5 3
*  Output- 1 2 3 4 5 7
*/

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int start, int end)
{
	int pIndex, pivot;
	pIndex = start;
	pivot = arr[end];
	for(int i = start; i < end; i++)
	{
		if(arr[i] <= pivot)
		{
			swap(&arr[i], &arr[pIndex]);	// Swap if element is less than pivot
			pIndex++;
		}
	}
	swap(&arr[pIndex], &arr[end]);	// Swap pivot with partition index element
	return pIndex;
}

void quickSort(int arr[], int start, int end)
{
	int pIndex;
	if(start < end)
	{
		pIndex = partition(arr, start, end);
		quickSort(arr, start, pIndex - 1);
		quickSort(arr, pIndex + 1, end);
	}
}
	
int main()
{
	int array[] = {7, 2, 4, 1, 5, 3};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	quickSort(array, 0, s - 1);
	
	printf("\nAfter Quick Sort, Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

