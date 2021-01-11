
#include<stdio.h>

int main(void)
{
    int arr[] = {15, 16, 3, 2, 6, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", n);
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(arr[j] >= arr[i])
                break;
        }
        if (j == n)
            printf("Leader is : %d\n", arr[i]);
    }

    return 0;
}
