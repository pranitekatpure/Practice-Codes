/* Bubble sort. 
*  Array - 1, 5, 7, 8, 9, 11, 2, 6.
*  Output- 1, 2, 5, 6, 7, 8, 9, 11.
*/

#include <stdio.h>

void bubble_sort(int array[], int n)
{
	int flag = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] =temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
		flag = 0;
	}
}
	
int main()
{
	int array[] = {1, 5, 7, 8, 9, 11, 2, 6};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	bubble_sort(array, s);
	
	printf("\nAfter Bubble Sort, Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

