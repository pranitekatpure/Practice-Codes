#include<stdio.h>
#include<string.h>
char str[100];

char *stringRev(char str[], int start, int end)
{
    char temp;
    while(start < end)
    {
        temp = str[start];
        str[start++] = str [end];
        str[end--] = temp;
    }
return str;
}

int main(void)
{

    printf("Please Enter string\n");
    gets(str);
    int len = strlen(str);
    printf("Original string: %s\n", str);
    //stringRev(str, 0, len-1);
    printf("Modified string: %s\n", stringRev(str, 0, len-1));
    return 0;
}
