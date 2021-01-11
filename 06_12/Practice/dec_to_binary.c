
#include<stdio.h>

int main()
{
    long a=1;
    long  n,rem,bin=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    while(n>0){
        rem=n%2;
        bin=bin+rem*a;
        n=n/2;
        a*=10;
    }

    printf("%ld ", bin);
}
