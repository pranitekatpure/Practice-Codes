
#include<stdio.h>
#include<string.h>

void isPalindrome(char *str)
{
    int i;
    int j = strlen(str) - 1;
    for (i = 0; i <= j; i++)
    {
        while (str[i] != str[j])
            break;
    }
        if (i>j)
            printf("Palindrome");
        else
            printf("Not Palindrome");
}
//
int main(void)
{
    char str[100];
    printf("Enter String:\n");
    gets(str);
    isPalindrome(str);

    return 0;
}
