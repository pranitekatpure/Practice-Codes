#include"extern_ex2.c"
#include<stdio.h>

int global_var = 12;
void fun();
int main(void)
{
    fun();
    printf("Global variable in function ONE is:%d\n", global_var);

    return 0;
}
