//Using Recursion
#include<stdio.h>

void reverse(char str[], int start, int end)
{
    char temp;
    if (start >= end)
        return;
    temp = str[start];
    str[start] = str [end];
    str[end] = temp;
    reverse(str, ++start, --end);
}

int main(void)
{
    char str[100];

    int i=0, j,count = 0;
    printf("Please Enter a string: ");
    gets(str);
    j = strlen(str) - 1;

    printf("%d\n", j);
    printf("Original String:%s\n", str);


    reverse(str, i, j);
    printf("Modified String:%s\n", str);
    return 0;
}


