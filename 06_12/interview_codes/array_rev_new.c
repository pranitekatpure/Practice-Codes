
#include<stdio.h>

void arrayReverse(int arr[], int start, int end)
{
    int temp;
    if (start >= end)
        return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    arrayReverse(arr, start+1, end-1);
}

void arrayPrint(int arr[] ,int end)
{
    int i;
    for (i=0; i<=end; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    arrayPrint(arr, size-1);

    arrayReverse(arr, 0, size-1);
    printf("Reversed Array\n");
    arrayPrint(arr, size-1);
    return 0;
}
