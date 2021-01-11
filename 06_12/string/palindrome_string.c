
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[50];
    int i = 0, j;
    printf("Enter a string:\n");
    gets(str);
    j = strlen(str) - 1;

    for (i = 0; i <= j; i++)
    {
        while (str[i] != str[j]){
            break;
            }
    }

    if (i > j)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
