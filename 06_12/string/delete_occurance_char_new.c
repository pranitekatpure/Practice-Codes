
#include<stdio.h>

void deleteOccurance(char *str, char ch)
{
    int i=0, j=0;
    for (i=0; i<strlen(str); i++)
    {
        if(str[i] != ch)
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main(void)
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    deleteOccurance(str, ' ');
    printf("Modified string:%s\n", str);
    return 0;
}
