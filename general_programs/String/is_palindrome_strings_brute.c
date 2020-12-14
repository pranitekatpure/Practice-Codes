/* char *str[] = {"m", "al", "aya", "l","a","m"};
 * Yes
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char *str[] = {"m", "al", "aya", "l","a","m"};
	
	int size, total_size = 0;
	size = sizeof(str)/sizeof(str[0]);
	for(int i = 0; i < size; i++)
		total_size = total_size + strlen(str[i]);
	printf("%d\n", total_size);
	char dumArr[total_size + size];
	int j = 0;
	for(int i = 0; i < size; i++)
	{
		for(int k = 0; k < strlen(str[i]); k++)
			dumArr[j++] = str[i][k];
	}
	dumArr[j] = '\0';
	printf("%s\n", dumArr);
	j--;
	int i = 0;
	while(j > i)
	{
		char temp = dumArr[j];
		dumArr[j] = dumArr[i];
		dumArr[i] = temp;
		i++;
		j--;
	}
	printf("%s\n", dumArr);

			
	exit(0);
}


