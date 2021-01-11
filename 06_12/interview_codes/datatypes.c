#include <stdio.h>
#include <limits.h>

int main(void)
{

 int  ia = -1;
 int ima = INT_MAX;

 //unsigned int uiData = (unsigned int)iData;
 unsigned int ua = -1;
 int ub = (int) ua;

 //printf("%d\n",ia);
 //printf("%x\n",ia);
 //printf("%d\n",ima);
// printf("%x\n",ima);
 printf("%u\n",ua);
 printf("%x\n",ub);
 printf("%d\n",ub);

 return 0;
}




/*
#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(void)
{
    int a = INT_MAX;
    unsigned int b = UINT_MAX;
    int res = (unsigned int) a;
    printf("%d\n", a);
    //printf("%u\n", b);
    printf("%u\n", res);

    return 0;
}
*/
