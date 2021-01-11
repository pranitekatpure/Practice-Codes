
//Command Line Arguments processing
//argc --> used to count the number of arguments
//argv[] --> character pointer array which stores the addresses of arguments passed

#include<stdio.h>
#include<direct.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("List of Elements:\n");
        for (int i=1; i<argc;i++)
            printf("%s ", argv[i]);
    }

    else
        printf("Insufficient Arguments");
    return 0;
}

