#include<stdio.h>

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<=size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

void arrayMaxMin(int arr[], int start, int size)
{
    int i, max = arr[0], min = arr[0];
    for (i=0; i<=size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Max is: %d\t", max);
    printf("Min is: %d\t", min);
}

int main(void)
{
    int arr[] = {-1, 1, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:\t");
    printArray(arr, size-1);

    arrayMaxMin(arr, 0, size-1);

    return 0;
}
