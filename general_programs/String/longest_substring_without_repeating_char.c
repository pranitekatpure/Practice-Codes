#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_nonrepeating(char *str, int start, int end)
{
	for(int i = start; i <= end - 1; i++)
	{
		for(int j = i + 1; j <= end; j++)
		{
			if(str[i] == str[j])
				return 0;
		}
	}
	return end - start;
}
int longest_substring(char *str)
{
	int count = 0, n, temp = 0;
	n = strlen(str);
	if(*str == '\0')
		return 0;
	for(int start = 0; start < n; start++)
	{
		for(int end = 0; end < n; end++)
		{
			temp = is_nonrepeating(str, start, end);
			if(count < temp)
				count = temp;
		}
	}
	return count + 1;
}
int main()
{
	char str[] = "";//""elgoogle";
	printf("Longest sub-string without repeating chr: %d", longest_substring(str));
	
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

