#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char **str1, char **str2)
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main(void)
{
    char *str1 = "abcd";
    char *str2 = "dcba";
    printf("Strings before swapping: str1 is: %s, str2 is: %s\n", str1, str2);
    swap(&str1, &str2);
    printf("Strings after swapping: str1 is: %s, str2 is: %s\n", str1, str2);
    return 0;
}

