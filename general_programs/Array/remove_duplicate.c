/* Write a C program to remove duplicates from sorted array. 
*  Array - 1, 5, 5, 8, 9, 11, 11, 2, 6, 6
*  Output- 1, 5, 8, 9, 11, 2, 6.
*/

#include <stdio.h>

int remove_duplicates(int array[], int n)
{
	int j = 0;
	for(int i = 0; i < n-1; i++)
	{
		if(array[i] != array[i + 1])
		{
			array[j] = array[i];
			j++;
		}
	}
	array[j++] = array[n - 1];
	
	return j;
}

int main()
{
	int array[] = {1, 5, 5, 8, 9, 11, 11, 2, 6, 6};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	int new_size;
	new_size = remove_duplicates(array, s);
	printf("\nAfter duplicates removal, Array: ");
	for(int i = 0; i < new_size; i++)
		printf("%3d", array[i]);
	
	return 0;
}
	

