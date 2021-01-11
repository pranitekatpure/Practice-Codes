//Sum of two numbers using Command Line Arguments
#include<stdio.h>
#include<direct.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        char *str1 = argv[1];
        char *str2 = argv[2];
        int a = atoi(str1);
        int b = atoi(str2);
        printf("Passed Command Line Arguments are: a = %d and b = %d", a, b);
        printf("\nSum is: %d\n", (a + b));
    }

    else
        printf("Insufficient Arguments");
    return 0;
}
