
#include<stdio.h>

void reverse(char str[], int start, int end)
{
        while(start<end)
    {
        char temp = str [start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    char str[100];
    int i=0, j;
    printf("Please Enter a string: ");
    gets(str);
    j = strlen(str) - 1;
    printf("%d\n", j);
    printf("Original String:%s\n", str);

    reverse(str, i, j);

    printf("Modified String:%s\n", str);
    return 0;
}

