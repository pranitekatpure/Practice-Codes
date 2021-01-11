
# include <stdio.h>

void print_array(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int remove_dup(int arr[], int start, int end)
{
	int i, j = 0;
	for(i = 0; i <= end; i++)
	{
		if(arr[i] != arr[i + 1])
		{
			arr[j] = arr[i];
			j++;
		}
	}
	arr[j++] = arr[end];
	return j;
}


int main(void)
{
	int arr[] = {1, 2, 2, 1, 3, 4};
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]);
	printf("Original Array:\n");
	print_array(arr, end);
	
	remove_dup(arr, start, end-1);
	printf("Modified Array:\n");
	print_array(arr, end);

}