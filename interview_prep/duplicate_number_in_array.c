/*
input: [1, 2, 3, 4, 5, 5] and n = 5
output: 5
*/


#include <stdio.h>
#include <stdlib.h>

/* Method 1: Brute Force. TC = O(n2), SC = O(1) */

int duplicate_num_m1(int arr[], int n)
{
	int i, j;
	
	if(n < 1)
		return -1;
	
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(arr[i] == arr[j])
				return arr[i];
		}
	}
}


/* Method 2: Using Sum Method. But it will work when there is only one duplicate */
int duplicate_num_m2(int arr[], int n)
{
	int arr_sum = 0, sum_1_to_n = 0;
	int duplicate_num = 0;
	
	if(n < 2)
		return -1;
	
	/* Get the sum of 1 to n */
	sum_1_to_n = ((n-1) * (n)) / 2 ;

	/* Get the sum of given array */
	for(int i = 0; i < n; i++)
	{
		printf("arr[i]: %d\n", arr[i]);
		arr_sum += arr[i];
	}
	printf("%d %d\n", sum_1_to_n, arr_sum);
	
	/* The difference between above two sums will give the missing number */
	duplicate_num = arr_sum - sum_1_to_n;
	return duplicate_num;
}

/* Method 3: Most efficient and covers all the possible cases. Using Array indexing. */
int duplicate_num_m3(int arr[], int n)
{
	int duplicate_num = -1;
	int value = 0;
	
	for(int i = 0; i < n; i++)
	{
		/* value at index i */
		value = abs(arr[i]);
		
		/* mark (make it -ve) the index (value-1) of value if it is not present (positive) */
		if(arr[value-1] >= 0)
		{
			arr[value-1] = arr[value-1] * -1;
		}
		else
		{
			/* If value at index is -ve, then it is duplicate */
			duplicate_num = value;
			printf("Duplicate Number: %d\n", duplicate_num);
			break;
			//continue;
		}
	}
	
	/* If you want to restore original array */
	for(int j = 0; j < n; j++)
	{
		if(arr[j] < 0)
			arr[j] = arr[j] * -1;
	}
	
	return duplicate_num;
}

int main(void)
{
	int arr[] = {1, 3, 3, 4, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Duplicate Number: %d\n", duplicate_num_m3(arr, n));
	return 0;
}
