/* I/P: 4, 5, 5, 3, 2, 1
 * O/P: 4, 5, 3, 2, 1
 */
#include <stdio.h>
/*----------------------------------------------
 * Method 1
 *---------------------------------------------*/
void find_duplicate_num(int arr[], int n)
{
	if(n == 0)
	{
		printf("Empty array\n");
		return;
	}
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(arr[i] == arr[j])
				printf("Duplicate number is: %d\n", arr[j]);
}

int main()
{
	int arr[] = {4, 5, 5, 3, 2, 1};
	find_duplicate_num(arr, (sizeof(arr)/sizeof(int)));

	return 0;
}
