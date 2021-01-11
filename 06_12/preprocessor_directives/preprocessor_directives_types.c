/* 4 main types of Preprocessor Directives:
1. MACROS ->
    #define MACRO_NAME macro_value
ex: #define LIMIT 5
    #define AREA(a,b) (a*b)

2. FILE INCLUSION -> Includes file in the source code program.
    Two types of file inclusion:
        I. Header file inclusion
            #include<file_name> - < > tells the compiler to look for the file in standard directory
        II. User Defined files:
            #include"filename"

3. CONDITIONAL COMPILATION -> Helps to compile specific portion of the program or to skip compilation of specific portion.
    Two preprocessing command are used 'ifdef' and 'endif'
    #ifdef macro_name
        statement 1
        .
        .
        statement N
    #endif

4. OTHER DIRECTIVES -> Two more directives which are not commonly used.
    #undef Directive: to undefine an existing macro
        #undef LIMIT

    #pragma Directive: Used to TURN ON and TURN OFF some features and are compiler specific.
    ex.:
        #pragma startup and #pragma exit
        #pragma warn Directive

*/
/*
#include<stdio.h>
#define MULTIPLY(a, b) (a)*(b)

int main(void)
{
    printf("%d\n", MULTIPLY(2+3, 3+2));
    return 0;
}
*/

#include<stdio.h>
#define MERGE(a, b) a##b
int main(void)
{
    printf("%d\n", MERGE(2, 3));

    return 0;
}
