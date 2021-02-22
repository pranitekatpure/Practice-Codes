
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* Method 1: Brute Force. Check for all substrings including single characters for palindrome. Single characters are considered
as palindrome. TC = O(n3)
Algo:
--> Check if the ends of the substring are the same character, going outside-in:
1. If they aren't, this substring is not a palindrome.
2. Else, we continue checking inwards until we get to the middle.
 */

bool is_palindrome(char *str, int start, int end)
{
    while(start < end)
	{
        if(str[start] != str[end])
            return false;
        
        ++start;
        --end;
    }
    return true;
}

int count_of_substrs(char *str)
{
    int res = 0;
    
    for(int start = 0; start < strlen(str); start++)
    {
        for(int end = start; end < strlen(str); end++)
		{
            res = res + is_palindrome(str, start, end);
		}
    }
    
    return res;
}

int main(void)
{
	char str[] = "google";
	
	printf("Count is: %d\n", count_of_substrs(str));
	
	
	return 0;
}