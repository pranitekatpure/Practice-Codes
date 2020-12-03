/* You are given two numbers A and B. The task is to count the number of bits 
 * needed to be flipped to convert A to B.

	Example 1:

	Input: A = 10, B = 20
	Output: 4
	Explanation:
	A  = 01010
	B  = 10100
	As we can see, the bits of A that need 
	to be flipped are 01010. If we flip 
	these bits, we get 10100, which is B.
	
	Expected Time Complexity: O(log N).
	Expected Auxiliary Space: O(1).
*/

#include<stdio.h>
/*-----------------------------------------------------------*/
/*
 * Method 1
 */
int countBitsFlip1(int a, int b)
{
    int count = 0;
    for(int i = 0; i < 32; i++)
    {
        if(((a >> i) & 1) != ((b >> i) & 1))
            count++;
    }
    return count;
}
	// Loop until both of them become zero 
    /*while (a || b) { 
  
        // Store the last bits in a 
        // as well as b 
        int last_bit_a = a & 1; 
        int last_bit_b = b & 1; 
  
        // If the current bit is not same 
        // in both the integers 
        if (last_bit_a != last_bit_b) 
            count++; 
  
        // Right shift both the integers by 1 
        a = a >> 1; 
        b = b >> 1; 
    }*/
/*------------------------------------------------------------*/
int countbits(int num)
{
	int count = 0;
	while(num > 0)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
/*------------------------------------------------------------*/
/*
 * Method 2: Efficient
 */
int countBitsFlip2(int a, int b)
{
    return countbits(a ^ b);
}
/*------------------------------------------------------------*/
int main(void)
{
	int a = 10, b = 20;
	
	printf("Bits required to flip 1: %d", countBitsFlip1(a, b));
	printf("\nBits required to flip 2: %d", countBitsFlip2(a, b));
	return 0;
}