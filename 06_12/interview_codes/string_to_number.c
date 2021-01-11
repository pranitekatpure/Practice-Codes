
#include<stdio.h>
#define getstring(a) #a
int main()
{
    int n = 10;
    printf("\n The string is %s", getstring('1'));
    getchar();
    return 0;
}
