/*
n = 5
input[] = {1, 2, 3}
output = 4, 5

Algo:

Method 1: 
count = 1;
for i 0 to arr_len-1:
	if arr[i] == count
		count++
	else
		break;
	return count

Method 2:
sum_array = 4+2+1+5 = 12
sum_1_to_n = n(n+1)/2 = 15

missing_num = sum_1_to_n - sum_array;

*/

#include <stdio.h>
#include <stdlib.h>

int find_missing(int arr[], int arr_len)
{
	int sum_array = 0;
	int sum_1_to_n = 0;
	for(int i = 0; i < arr_len; i++)
	{
		sum_array += arr[i];
	}
	
	sum_1_to_n = ((arr_len+1)*(arr_len+2))/2;
	return (sum_1_to_n - sum_array);
}


int main()
{
	int arr[] = {1, 2, 3};
	int res = 0;
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	
	res = find_missing(arr, arr_len);
	printf("Missing Number: %d\n", res);
	return 0;
}



