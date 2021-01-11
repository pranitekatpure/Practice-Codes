
#include<stdio.h>

char *reverse(char arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return arr;
}

void print(char arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%c", arr[i]);
    printf("\n");
}

int main(void)
{
    char arr[] = "Santosh Jadhav";
    int size = strlen(arr);
    printf("Original string\n");
    print(arr, size);

    printf("Reversed string\n");
    //reverse(arr, 0, size-1);
    print(reverse(arr, 0, size-1), size);

    return 0;
}

