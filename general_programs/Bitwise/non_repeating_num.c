/* Find the element that appears once in an array where every other element appears twice. */

/* Given an array of integers. All numbers occur twice except one number which occurs once. 
 * Find the number in O(n) time & constant extra space.

 * Example :

 * Input:  ar[] = {7, 3, 5, 4, 5, 3, 4}
 * Output: 7
 
 * One solution is to check every element if it appears once or not. 
 * Once an element with a single occurrence is found, return it. 
 * Time complexity of this solution is O(n2).
 * Another method is to sort array and compare adjacent elements.
 */ 

#include<stdio.h>

int non_repeating_num(int arr[], int size)
{
	int xor = arr[0];
	for(int i = 1; i < size; i++)
	{
		xor = xor ^ arr[i];
	}
	return xor;
}

int main(void)
{
	int arr[] = {7, 3, 5, 4, 5, 3, 4};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Non repeating number is: %d", non_repeating_num(arr, size));
	
	return 0;
}