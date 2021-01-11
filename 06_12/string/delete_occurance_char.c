
#include<stdio.h>

void delChar (char *str, char ch)
{
    int i = 0, j = 0;
    for (i = 0; i <= strlen(str)-1; i++)
    {
        if (str[i] != ch)
            str[j++] = str[i];
    }
    str[j] = '\0';
}

int main(void)
{
    char str[] = "  santosh jadhav  ";
    printf("Original string:%s\n", str);
    delChar(str, ' ');
    printf("Modified string:%s\n", str);
    return 0;
}
