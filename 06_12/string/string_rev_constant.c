
#include<stdio.h>
#include<string.h>

char *rev(char *str)
{
    int len = strlen(str);
    printf("%d\n", len);
    char *ptr_rev = (char*) malloc(sizeof(len + 1));
    strcpy(ptr_rev, str);
    int i = 0;
    int j = len-1;
    while(str[i] != '\0')
    {
        ptr_rev[i] = str[j];
        i++;
        j--;
    }
    return ptr_rev;
}

int main(void)
{
    char str[] = "Santosh Jadhav";
    printf("%s\n", rev(str));

    return 0;
}
