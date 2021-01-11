/*
INPUT:
text :  a b c b c g l x
pattern : b c g l

OUTPUT:
If pattern is present int text, return starting index in text.
i.e. Output = 3
If absent return -1;
*/

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE -1

int stringMatch (char text[], char pattern[], int m, int n)
{
    int i=0, j=0 , k=0;
    while (i<m && j<n)
    {
        if(text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
			j = 0;
			k++;
			i = k;
        }
    }
    if (j == n)
        return k;
    return -1;
}

int main(void)
{
    char text[] = "abcbcglx";
    char pattern[] = "bcglx";
    int m = strlen(text);
    int n = strlen(pattern);
    int res = stringMatch(text, pattern, m, n);
    printf("%d\n",res);

    return 0;
}
