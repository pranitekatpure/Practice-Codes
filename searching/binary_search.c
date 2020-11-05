/* Binary search. 
*  O(logn)
*/

#include <stdio.h>

int binary_search(int array[], int n, int x)
{
	int start = 0, mid, end = n - 1;
	while(start <= end)
	{
		mid = (start + end)/2;
		if(x == array[mid])
		{
			return mid;
		}
		else if(x < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
}
	
int main()
{
	int array[] = {1, 5, 7, 8, 9, 11, 12, 16};
	int s = (sizeof(array)/sizeof(array[0]));
	printf("Array: ");
	for(int i = 0; i < s; i++)
		printf("%3d", array[i]);
	
	s = binary_search(array, s, 16);
	
	printf("\nElement found at %d position.", s + 1);
	
	return 0;
}
	

