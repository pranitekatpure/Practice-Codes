
#include<stdio.h>

int main(void)
{
    int n = 10;
    int res, res1, res2, res3;
    //setting bit
    res = n | (1 << 2);
    printf("Set bit:%d\n", res); // 1110

    //clearing bit
    res1 = n & ~(1 << 2);
    printf("Res after clearing bit:%d\n", res1);//1010

    //checking bit
    res2 = n & (1 << 2);
    printf("Checking bit:%d\n", res2); //False

    //toggling bit
    res3 = n ^ (1 << 2);
    printf("Result after toggling bit:%d\n", res3);//1110
    return 0;

}
