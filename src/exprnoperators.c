// Chapter 4

#include <stdio.h>

// Note: an operator is a keyword or one+ punctuators
// that can be used to perform an operation
// an expression is a series of operators used to
// compute a value or accomplish another purpose

int main()
{
    int i = 21;
    int j = 7;
    i       // lvalue (aka left value aka locator value)
    =       // operator
    j;      // rvalue (aka right value aka expression value)

    int fe;
    fe = 2 + 9; // considered a side effect, as it changes execution environment

    // Indicates size in bytes
    printf("short: %zu\n", sizeof(short));
    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
}
