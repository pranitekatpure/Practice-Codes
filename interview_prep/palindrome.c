#include <stdio.h>
#include <string.h>

int main(void)
{
	int len_str = 0, front_str = 0, end_str = 0, front_ch = 0, end_ch = 0;
	int front_substr_len = 0, end_substr_len = 0;
	int flag = 0;
	char *str[] = {"m", "ala", "aya", "lam"};
	len_str = sizeof(str)/sizeof(str[0]);
	end_str = len_str - 1;
	
	front_substr_len = strlen(str[front_str]);
	end_substr_len = strlen(str[end_str]);
	
	end_ch = end_substr_len - 1;
	
	while(front_str != end_str || front_ch != end_ch)
	{
		front_substr_len = strlen(str[front_str]);
		end_substr_len = strlen(str[end_str]);
			
		if(str[front_str][front_ch] != str[end_str][end_ch])
		{
			flag = 1;
			break;
		}
		front_ch++;
		end_ch--;
		
		if(front_ch == front_substr_len)
		{
			front_str++;
			front_ch = 0;
		}
		if(end_ch == -1)
		{
			end_str--;
			end_substr_len = strlen(str[end_str]);
			end_ch = end_substr_len -1;
		}	
	}
	
	if(flag)
		printf("No Palindrome");
	else
		printf("Palindrome");
	
	return 0;
}











