#include"extern_2.h"
#include<stdio.h>

extern int global_var;
int local_var = 10;
void fun();
int main(void)
{
    extern int local_var;
    fun();
    printf("Global variable in function ONE is:%d\n", global_var);
    printf("Local variable in function ONE is:%d\n", local_var);
    return 0;
}

