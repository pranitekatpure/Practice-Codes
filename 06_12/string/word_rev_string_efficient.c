// Special cases : strings starting with spaces and having multiple spaces in between
#include<stdio.h>
#include<string.h>

void reverse(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void word_rev(char *s)
{
    char *begin = s;
    char *temp = s;

    while(*temp != 0)
    {
        temp++;
        if (*temp == '\0')
            reverse(begin, temp-1);
        else if (*temp == ' ')
        {
            reverse(begin, temp-1);
            begin = temp + 1;
        }
    }
    reverse(s, temp-1);
}

int main(void)
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    word_rev(str);
    printf("%s", str);
    return 0;
}

