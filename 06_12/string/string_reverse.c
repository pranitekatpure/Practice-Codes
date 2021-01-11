
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];
    int i=0, j, temp;
    printf("Please Enter a string: ");
    gets(str);
    j = strlen(str) - 1;
    printf("%d\n", j);
    printf("Original String:%s\n", str);
/*
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
 */
    while(i < j)
    {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
        i++;
        j--;
    }
    printf("Modified String:%s\n", str);
    return 0;
}
