/* Program to reverse the elements of an array*/
#include<stdio.h>

int main(void)
{
	int i,j,temp,arr[10] = {1,2,3,4,5,6,7,8,9,10};
	i = 0;
	j = (sizeof(arr)/sizeof(arr[0])) - 1;
	while(i<j)
	{
		temp=arr[i];
		arr[i++]=arr[j];
		arr[j--]=temp;
	}
	printf("After reversing, the array is : ");
	for(i=0; i<10; i++)
		printf("%d  ",arr[i]);
	printf("\n");
	return 0;
}

