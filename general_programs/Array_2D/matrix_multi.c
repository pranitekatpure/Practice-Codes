#include <stdio.h>
#include <limits.h>

int main(void)
{
    int A[][2] = {{2, 3}, {4, 5}};
	int B[][2] = {{2, 3}, {4, 5}};
	int C[2][2];
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\nMultiplied:\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			C[i][j] = 0;
			for(int k = 0; k < 2; k++)
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}