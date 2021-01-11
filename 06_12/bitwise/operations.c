
#include<stdio.h>

int main(void)
{
    int n = 10010;
    int res = 0;
    while(n>0)
    {
        int r = n % 10;
        res = res + r;
        n /= 10;
    }
    printf("%d\n", res);
    return 0;
}
