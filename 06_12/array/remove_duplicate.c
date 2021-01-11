
#include<stdio.h>

int rem_duplicate(int arr[], int n)
{
    int j = 0, i;
    if (n == 0 || n == 1)
        return n;

    for (i=0; i<n-1; i++)
    {
        if (arr[i] != arr[i+1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j++] = arr[n-1];
    return j;

}
int main(void)
{
    int arr[] = {1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;
    len = rem_duplicate(arr, len);
    printf("%d\n", len);

    for (i = 0; i < len; i++)
        printf("%d\t", arr[i]);
    return 0;
}
