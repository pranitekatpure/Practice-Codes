/*
	i--> 2
	str = 'abcbcglx'
		   01234567
	j--> 0
	sub_str = 'bcglx'
			   01234
	k--> 2
	i = k
*/




# include <stdio.h>
# include <string.h>

int is_substr(char str[], char sub_str[], int str_len, int substr_len)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < str_len && j < substr_len)
	{
		if(str[i] == sub_str[j])
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			k++;
			i = k;
		}
	}
	
	if(j == substr_len)
		return k;
	
	return -1;
}

int main(void)
{
	char str[] = "abcbcgl";
	char sub_str[] = "bcglx";
	
	int len_str = strlen(str);
	int len_substr = strlen(sub_str);
	
	int res = is_substr(str, sub_str, len_str, len_substr);
	printf("%d\n", res);
	
	return 0;
}
