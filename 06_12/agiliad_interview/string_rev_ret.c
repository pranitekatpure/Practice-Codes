
#include<stdio.h>
#include<string.h>

char *rev(char *str, int start, int end)
{
    char *ptr_rev = (char*)malloc(sizeof(end+1));
    while(str[start] != '\0')
    {
        ptr_rev[start] = str[end];
        start++;
        end--;
    }

    return ptr_rev;
}

int main(void)
{
    char str[] = "Santosh Jadhav";
    int len = strlen(str);
    printf("%d\n", len);
    printf("%s\n", rev(str, 0, len-1));

    return 0;
}

