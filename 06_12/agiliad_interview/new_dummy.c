
#include<stdio.h>

void fun(int num)
{
    if(num == 0)
        return;

        int res = num % 10;
        num = num/10;
        fun(num);
        printf("%d\n", res);

}

int main(void)
{
    int n = 1234;
    printf("original number: %d\n", n);
    fun(n);
    return 0;
}
