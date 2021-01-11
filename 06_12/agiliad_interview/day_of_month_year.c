
#include<stdio.h>

int dom(int d, int m, int y)
{
    int odd_days[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    if (m < 3)
        y = y - 1;

    return (y + y/4 + y/400 - y/100 + odd_days[m-1] + d) % 7;
}

int main(void)
{
    int day = 23, month = 7, year = 2019;
    //printf("Please Enter data\n");
    //scanf("%d %d %d", &day, &month, &year);

    printf("%d", dom (day, month, year));

    return 0;
}
