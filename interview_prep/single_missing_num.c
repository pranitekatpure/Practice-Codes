#include <stdio.h>

/*
{1, 2, 3, 4, 5}

arr_sum = 1 + 2 + 3 + 4 + 5 

*/

//int missing_num(int arr[], int n)
//{
//	int arr_sum = 0, sum_1_to_n = 0;
//	int missing_num = 0;
//	
//	/* Get the sum of 1 to n */
//	sum_1_to_n = ((n+1) * (n+2)) / 2 ;
//
//	/* Get the sum of given array */
//	for(int i = 0; i < n; i++)
//	{
//		printf("arr[i]: %d\n", arr[i]);
//		arr_sum += arr[i];
//	}
//	printf("%d %d\n", sum_1_to_n, arr_sum);
//	
//	/* The difference between above two sums will give the missing number */
//	missing_num = sum_1_to_n - arr_sum;
//	return missing_num;
//}

int missing_num(int arr[], int n)
{
	int arr_sum = arr[0];
	int sum_1_to_n = 1;
	int missing_num = 0, i = 0;

	for(i = 1; i < n; i++)
	{
		arr_sum = arr_sum ^ arr[i];
	}
	
	for(i = 2; i <= n + 1 ; i++)
	{
		sum_1_to_n = sum_1_to_n ^ i;
	}
	
	printf("%d %d\n", sum_1_to_n, arr_sum);
	missing_num = sum_1_to_n ^ arr_sum;
	return missing_num;
}

int main(void)
{
	int arr[] = {1, 2, 3, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Missing Number: %d\n", missing_num(arr, n));
	return 0;
}



