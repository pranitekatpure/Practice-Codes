
#include<stdio.h>

int* Fun()
{
 int Data = 5; //Local variable

 return &Data; //Address of local variable
}


int main()
{
 int *piData;
 piData = Fun(); //Returning address of the local variable

 printf("%d", *piData);

 return 0;
}


// realloc(NULL, sizeof(int));
// realloc(some_ptr, 0);