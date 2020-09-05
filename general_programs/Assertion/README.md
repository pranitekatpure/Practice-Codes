# Assertion
Assertions are statements used to test assumptions made by programmer. For example, 
we may use assertion to check if pointer returned by malloc() is NULL or not.
> void assert( int expression );
If expression evaluates to 0 (false), then the expression, sourcecode filename, 
and line number are sent to the standard error, and then abort() function is called.

The C library macro void assert(int expression) allows diagnostic information to be written to the standard error file. In other words, 
it can be used to add diagnostics in your C program.