#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_substrings(char *str, int start, int end)
{
	int s = start, e = end;
	while(start < end)
	{
		if(str[start] != str[end])
		{
			return;
		}
		start++;
		end--;
	}
	for(int i = s; i <= e; i++)
		printf("%c", str[i]);
	printf(" ");
}
int longest_substring(char *str)
{
	int count = 0, n, temp = 0;
	n = strlen(str);
	if(*str == '\0')
		return 0;
	for(int start = 0; start < n; start++)
	{
		for(int end = start; end < n; end++)
		{
			print_substrings(str, start, end);
		}
	}
	return count + 1;
}
int main()
{
	char str[] = "elgoogle";
	longest_substring(str);
	
	return 0;
}
/* static int length_of_longest_substring(char *str1)
{
    int offset[128];
    int substr_max_len = 0;
    int len = 0;
    int index = 0;

    memset(offset, 0xff, sizeof(offset));
    while (*str1 != '\0') 
	{
        if (offset[*str1] == -1) 
		{
            len++;
        } 
		else 
		{
            if (index - offset[*str1] > len)
			{
                len++;
            } 
			else 
			{
				len = index - offset[*str1];
            }
        }
        if (len > substr_max_len) 
		{
            substr_max_len = len;
        }
        offset[*str1++] = index++;
    }

    return substr_max_len;
} */

/* int main(void)
 {
    char *str1 = "pwwkew";
	printf("\nOriginal String: %s", str1);
	printf("\nLength of the longest substring without repeating characters: %d\n", length_of_longest_substring(str1));
	return 0;
} */

