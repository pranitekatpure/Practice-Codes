
#include<stdio.h>
#define SIZE(arr) (sizeof(arr)/(sizeof((arr[0]))))

int main(void)
{
    int arr[] = {1, 2, 3, 4};
    int size = SIZE(arr);
    int size_1 = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    printf("%d\n",size_1);
    printf("Array Size:%d\n", sizeof(arr));
    return 0;
}
