
#include<stdio.h>
#include<string.h>

void reverse(char str[])
{
    int i = 0;
    for (i=0; i<strlen(str) && str[i]!=' ';i++)
        printf("%c", str[i]);
    
	char temp[] = "";
    for (; i<strlen(i); i++)
    {
        if(str[i] != ' ')
            temp[i] = temp[i] + str[i];
        else
        {
            rev()


        }
    }
}

int main(void)
{
    char str[] = "Who are you";
    reverse(str);
    return 0;
}
