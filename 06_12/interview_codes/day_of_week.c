#include<stdio.h>

int daystotal (int y, int m, int d)
{
	static char daytab[2][12] =
	{
		{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	};
	int daystotal = d;
	for (int year = 1 ; year <= y ; year++)
	{
		int max_month = ( year < y ? 12 : m-1 );
		int leap = (year%4 == 0);
		if (year%100 == 0 && year%400 != 0)
			leap = 0;
		for (int month = 1 ; month <= max_month ; month++)
		{
			daystotal += daytab[leap][month];
			printf("%d\n",daystotal);
		}
	}
	return daystotal;
}

int main(void)
{
    int y =2019, m =6, d =23;
    int res = daystotal(y, m, d);

    printf("%d\n", res);
    int dow = res%7;
    printf("%d\n", dow);
    return 0;
}
