
#include<stdio.h>
#include<math.h>
//Ascending Order
int compare1(int a, int b)
{
    if(a>b)
        return 1;
    else
        return -1;
}
//Descending Order
int compare2(int a, int b)
{
    if(a<b)
        return 1;
    else
        return -1;
}

int compare3(int a, int b)
{
    if(abs(a)<abs(b))
        return 1;
    else
        return -1;
}

void bubbleSort(int *A, int n, int (*compare)(int, int))
{
    int i, j, temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
int main(void)
{
    int arr[] = {4, 1, -3, 2, -5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size, compare1);
    int i = 0;
    for(i=0; i<size; i++)
        printf("%d", arr[i]);
    printf("\n");
    bubbleSort(arr, size, compare2);

    for(i=0; i<size; i++)
        printf("%d", arr[i]);
    printf("\n");
    bubbleSort(arr, size, compare3);

    for(i=0; i<size; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}
