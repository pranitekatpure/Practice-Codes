/* Write a C program to find and print all unique elements of a given array of integers. 
*  Array - 1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6
*  Output- 1, 5, 7, 8, 9, 11, 2, 6.
*/

#include <stdio.h>

int main()
{
	int array[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
	int s1 = (sizeof(array)/sizeof(array[0]));
	printf("Original Array: ");
	for(int i = 0; i < s1; i++)
		printf("%3d", array[i]);
	
	printf("\nUinique elements of Array: ");
	for(int i = 0; i < s1; i++)
	{
		int j;
		for(j = 0; j < i; j++)
			if(array[i] == array[j])
				break;
				
		if(i == j)
			printf("%3d", array[i]);
	}
	return 0;
}
	

