
#include<stdio.h>

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i< size; i++)
        printf("%d\t", arr[i]);
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}
