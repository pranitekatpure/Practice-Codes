/* char *str[] = {"m", "al", "aya", "l","a","m"};
 * Yes
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *str[] = {"m", "al", "aya", "l","a","m"};
	
	int front_str, end_str, front_char, end_char, front_len, end_len, num_str, flag = 1;
	
	num_str = sizeof(str)/sizeof(str[0]);
	front_str = 0;
	end_str = num_str - 1;
	
	front_len = strlen(str[front_str]);
	end_len = strlen(str[end_str]);
	
	front_char = 0;
	end_char = end_len - 1;
	
	while(front_str != end_str || front_char != end_char)
	{
		front_len = strlen(str[front_str]);
		
		if(str[front_str][front_char] != str[end_str][end_char])
		{
			flag = 0;
			break;
		}
		++front_char;
		--end_char;
		if(front_char == front_len)
		{
			++front_str;
			front_char = 0;
		}
		if(end_char == -1)
		{
			--end_str;
			end_len = strlen(str[end_str]);
			end_char = end_len - 1;
		}
	}
	if(flag)
		printf("Palindrome.\n");
	else
		printf("Not Palindrome.\n");
			
	exit(0);
}


