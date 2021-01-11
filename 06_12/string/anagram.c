
#include<stdio.h>
#include<string.h>
#define FALSE 0
#define TRUE 1

int areAnagram(char *str1, char *str2)
{
    int Arr1[256] = {0};
    int Arr2[256] = {0};
    int i;
    if (strlen(str1) != strlen(str2))
        return FALSE;
    for (i = 0; i < strlen(str1); i++) // for (i = 0; str1[i] && str2[i]; i++)
    {
        Arr1[str1[i]]++;
        Arr2[str2[i]]++;
		printf("%d\t, %d\n", Arr1[str1[i]], Arr2[str2[i]]);
    }

    //if(str1[i] || str2[i])
      //  return FALSE;

    for (i = 0; i < 256; i++)
    {
        if (Arr1[i] != Arr2[i])
            return FALSE;
    }
    return TRUE;
}


int main(void)
{
    char str1[] = "abcdefghabcdefgh";
    char str2[] = "abcdefghabcdefgh";

    if (areAnagram(str1, str2))
        printf("Strings are Anagram");
    else
        printf("Strings are not an Anagram");

    return 0;
}
