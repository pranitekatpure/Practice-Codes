
#include<stdio.h>

void reverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    printArray(arr, size);

    printf("Reversed Array\n");
    reverseArray(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}
