/* Bubble sort. 
*  Array - 7 2 4 1 5 3
*  Output- 1 2 3 4 5 7
*/

#include <stdio.h>

void selection_sort(int array[], int n)
{
	int i, j, iMin;
	for(i = 0; i < n-1; i++)
	{
		iMin = i;
		for(j = i + 1; j < n; j++)
		{
			if(array[j] < array[iMin])
				iMin = j;
		}
		int temp = array[i];
		array[i] = array[iMin];
		array[iMin] = temp;
	}		
}
	
int main()
{
	int array[] = {7, 2, 4, 1, 5, 3};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	selection_sort(array, s);
	
	printf("\nAfter Selection Sort, Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

