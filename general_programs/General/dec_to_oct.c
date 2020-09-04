#include <stdio.h>

void dec_to_oct(int num)
{
	char octnum[11] = {0};
	int temp, i = 0;
	unsigned unum = (unsigned)num;
	if(num == 0)
		printf("%d", 0);
	while(unum != 0)
	{
		temp = unum%8;
		unum = unum/8;
		octnum[i] = temp;
		i++;
	}
	for(int j = (i - 1); j >= 0; j--)
		printf("%d", octnum[j]);
}

int main()
{
	int num;
	scanf("%d", &num);
	dec_to_oct(num);
	return 0;
}
