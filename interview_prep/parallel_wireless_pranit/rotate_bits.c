/* Bit swapping */

#include<stdio.h>

#define CHAR_SIZE 8
#define MAX_BITS (sizeof(int)*8)
int rotate_left(int num, int count)
{
	return (int)(((unsigned)num << count) | ((unsigned)num >> (MAX_BITS - count)));
}

int rotate_right(int num, int count)
{
	return (int)(((unsigned)num >> count) | ((unsigned)num << (MAX_BITS - count)));
}




int main(void)
{
	int num, count;
	scanf("%d", &num);
	scanf("%d", &count);
	printf("Num: %d\n", num);
	printf("After rotate_left: %d\n", rotate_left(num, count));
	printf("After rotate_right: %d\n", rotate_right(num, count));
	
	return 0;
}