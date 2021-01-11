
#include<stdio.h>

int daysTotal(int y, int m, int d)
{
    static int daytab[2][12] =
    {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
    int days = d;

    for (int year = 1; year <= y; year++)
    {
        int max_month = (year < y ? 12: m-1);
        int leap = (year % 4 == 0);
        if (year % 100 && year % 400 != 0)
            leap = 0;
        for (int month = 1; month <= max_month; month++)
        {
            days = days + daytab[leap][month];
        }
    }
    return days;
}


int main(void)
{
    int y = 2019, m = 7, d = 21;
    int res = daysTotal(y, m, d);
    printf("Total days are: %d\n", res);
    int dow = res % 7;
    printf("%d", dow);

    return 0;
}
