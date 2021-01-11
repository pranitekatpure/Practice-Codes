
#include<stdio.h>

int main(void)
{
    int arr[] = {15, 16, 3, 2, 6, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", n);
    int i, mfr = arr[n-1];
    printf("Leader is : %d\n", mfr);
    for (i=n-2; i>=0; i--)
    {
        if(arr[i] > mfr)
        {
            printf("Leader is : %d\n", arr[i]);
            mfr = arr[i];
        }
    }
    return 0;
}

