
#include<stdio.h>

void revArray(int arr[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

Print(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", size);
    printf("Original Array:\n");
    Print(arr, size);
    printf("Reversed Array:\n");
    revArray(arr, 0, size-1);
    Print(arr, size);
    return 0;
}
