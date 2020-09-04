#include <stdio.h>

void dec_to_hex(int num)
{
	char hexnum[8] = {0};
	int temp, i = 0;
	unsigned unum = (unsigned)num;
	if(num == 0)
	{
		printf("0");
		return;
	}
	while(unum != 0)
	{
		temp = unum%16;
		unum = unum/16;
		if(temp < 10)
		{
			hexnum[i] = temp + (int)'0';
			i++;
		}
		else
		{
			hexnum[i] = temp + ((int)'A' - 10);
			i++;
		}
	}
	
	for(int j = (i - 1); j >= 0; j--)
		printf("%c", hexnum[j]);
}
	

int main()
{
	int num;
	scanf("%d", &num);
	dec_to_hex(num);
	return 0;
}
