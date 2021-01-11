#include<stdio.h>

int Print(int A[], int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (A[i] % x == 0)
            for (int j = 0; j < size; j++)
            {
                int temp = A[i] / x;
                if (temp == A[j])
                {
                    printf("Quotient found");
                    return temp;
                }

            }
    }

    if (i == size)
        printf("Quotient not found");
    return NULL;
}

int main(void)
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(A)/sizeof(A[0]);
    int x = 10;
    int res = Print(A, size, x);
    printf("%d\n", res);
    return 0;
}
