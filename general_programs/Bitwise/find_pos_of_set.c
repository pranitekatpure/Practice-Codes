/* Given a number N having only one ‘1’ and all other ’0’s in its binary representation, 
find position of the only set bit. If there are 0 or more than 1 set bit the answer 
should be -1. Position of  set bit '1' should be counted starting with 1 from LSB side 
in binary representation of the number. 
 in 2 out 2
 in 5 out -1
 in 4 out 3
*/

#include <stdio.h>

int findPosition(int N) 
{
    int pos = 1;
    if((N & (N - 1)) || N == 0)
        return -1;
    while(N > 0)
    {
        if(N & 1)
			break;

        N = N >> 1;
        pos++;
    }
    return pos;
}

int main()
{
	int a;
	scanf("%d", &a);

	printf("Pos at: %d\n", findPosition(a));

	
	return 0;
}