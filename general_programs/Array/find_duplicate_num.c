/* I/P: 4, 5, 5, 3, 2, 1
 * O/P: 4, 5, 3, 2, 1
 */
#include <stdio.h>
#include <stdlib.h>
/*----------------------------------------------
 * Method 1: Brute Force
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
				printf("Brute Force: Duplicate number is: %d\n", arr[j]);
}
/*----------------------------------------------
 * Method 2: Sum method, won't work for two or
 *			 more duplicate numbers.
 *---------------------------------------------*/
void find_duplicate_num1(int arr[], int n)
{
	int sum1 = 0, sum2;
	for(int i = 0; i < n; i++)
		sum1 = sum1 + arr[i];
	sum2 = (n - 1)*n/2;
	printf("Sum Method: Duplicate number is: %d\n", sum1 - sum2);
}
/*----------------------------------------------
 * Method 3: Marker Method
 *---------------------------------------------*/
void find_duplicate_num2(int arr[], int n)
{
	int index;
	for(int i = 0; i < n; i++)
	{
		index = abs(arr[i]);
		if(arr[index] < 0)
		{
			printf("Marker Method: Duplicate number is: %d\n", index);
		}
		else
		{
			arr[index] = arr[index]*(-1);
		}
	}
}
 /*---------------------------------------------*/
 
int main()
{
	int arr[] = {2, 4, 5, 1, 3, 3, 1, 2};
	find_duplicate_num(arr, (sizeof(arr)/sizeof(int)));
	find_duplicate_num1(arr, (sizeof(arr)/sizeof(int)));
	find_duplicate_num2(arr, (sizeof(arr)/sizeof(int)));

	return 0;
}
