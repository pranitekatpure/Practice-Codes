
#include<stdio.h>

int main(void)
{
    int n = 10;
    int count = 0;
    unsigned int res = (unsigned int) n;
    while (n != 0)
    {
        n = n & (n-1);
        count++;
    }
    printf("%d\n", count);
    return 0;
}


// #include <stdio.h> 
  
// int count(int num) 
// { 
//     unsigned int count = 0; 
//     while (num != 0) { 
//         num &= (num - 1); 
//         count++; 
//     } 
//     return count; 
// } 

// int main() 
// { 
//     int num = 1; 
//     printf("%d\n", count(num)); 
//     return 0; 
// }