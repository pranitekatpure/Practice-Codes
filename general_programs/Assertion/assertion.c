#include <stdio.h>
#include <assert.h>

int main()
{
	int x = 7;
	x = 9;		// value may be changed accidentally
	// assert original value of x
	assert(x == 7);
	
	return 0;
}