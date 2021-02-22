/* Bubble sort. 
*  Array - 7 2 4 1 5 3
*  Output- 1 2 3 4 5 7
*/

#include <stdio.h>

void merge(int left[], int nL, int right[], int nR, int arr[])
{
	int i, j, k;
	i = j = k = 0;
	
	while(i < nL && j < nR)
	{
		if(left[i] < right[j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while(i < nL)
	{
		arr[k] = left[i];
		k++;
		i++;
	}
	while(j < nR)
	{
		arr[k] = right[j];
		k++;
		j++;
	}
}

void mergeSort(int arr[], int n)
{
	int mid;
	if(n < 2)
		return;
	mid = n/2;
	int left[mid];
	int right[n - mid];
	for(int i = 0; i < mid; i++)
		left[i] = arr[i];
	for(int i = mid; i < n; i++)
		right[i - mid] = arr[i];
	mergeSort(left, mid);
	mergeSort(right, n - mid);
	merge(left, mid, right, n - mid, arr);
}
	
int main()
{
	int array[] = {7, 2, 4, 1, 5, 3};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	mergeSort(array, s);
	
	printf("\nAfter Merge Sort, Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

