/* 2D array using malloc */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int rows = 5;
	int columns = 5;
	
	int **arr = (int **)malloc(rows * sizeof(int *));
	
	for(int i = 0; i < rows; i++)
		arr[i] = (int *)malloc(columns * sizeof(int));
	
	int a = 0;
	for(int k = 0; k < rows; k++)
		for(int j = 0; j < columns; j++)
			arr[k][j] = ++a; 
	
	for(int k = 0; k < rows; k++)
	{
		for(int j = 0; j < columns; j++)
			printf("%d\t", arr[k][j]);
		printf("\n");
	}

	
    return 0;
}