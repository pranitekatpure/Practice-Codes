
#include<stdio.h>
#define FALSE 0
#define TRUE 1

int areAnagram(char *str1, char *str2)
{
	if(strlen(str1) != strlen(str2))
		return false;
    int Arr1[256] = {0};
    //int Arr2[256] = {0};
    int i;
    for (i = 0; str1[i] && str2[i]; i++) // for (i = 0; str1[i] && str2[i]; i++)
    {
        Arr1[str1[i]]++;
        Arr1[str2[i]]--;
    }

    if(str1[i] || str2[i])
        return FALSE;

    for (i = 0; i < 256; i++)
    {
        if (Arr1[i])
            return FALSE;
    }
    return TRUE;
}


int main(void)
{
    char str1[] = "abcdefgh";
    char str2[] = "abcdefgh";

    if (areAnagram(str1, str2))
        printf("Strings are Anagram");
    else
        printf("Strings are not an Anagram");

    return 0;
}

