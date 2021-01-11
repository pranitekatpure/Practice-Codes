
#include<stdio.h>
#include<string.h>

void reverse(char *start, char *end)
{
    while(start < end)
    {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void word_reverse(char *s)
{
    char *temp = s;
    char *w_begin = s;

    while(*temp != 0)
    {
        temp++;

        if (*temp == ' ')
        {
            reverse(w_begin, temp-1);
            w_begin = temp + 1;
        }
        else if(*temp == '\0')
            reverse(w_begin, temp-1);
    }
}

int main(void)
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    word_reverse(str);

    printf("Reversed string is: %s", str);

    return 0;
}
