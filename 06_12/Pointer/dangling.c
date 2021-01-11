#include<stdio.h>
#include<stdlib.h>

int main()
{
int *p= NULL;

p= malloc(sizeof(int)* 5); //Allocate memory for 5 integer
printf("%d\n", p);
free(p); //free the allocated memory
p++;
*p= 2; //p is dangling pointer
printf("%d\n", p);
printf("%d",*p);

return 0;

}
