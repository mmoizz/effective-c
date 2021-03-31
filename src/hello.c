// Chapter 1, Example 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    if (puts("Hello World!") == EOF)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
