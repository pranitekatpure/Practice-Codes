/* Insertion sort. 
*  Array - 7 2 4 1 5 3
*  Output- 1 2 3 4 5 7
*/

#include <stdio.h>

void insertion_sort(int array[], int n)
{
	int value, hole;
	for(int i = 1; i < n; i++)
	{
		value = array[i];
		hole = i;
		while(hole > 0 && array[hole - 1] > value)
		{
			array[hole] = array[hole - 1];
			hole = hole - 1;
		}
		array[hole] = value;
	}		
}
	
int main()
{
	int array[] = {7, 2, 4, 1, 5, 3};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	insertion_sort(array, s);
	
	printf("\nAfter Insertion Sort, Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

