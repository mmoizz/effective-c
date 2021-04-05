// Chapter 11

#include <assert.h>
#include <stdio.h>
#include <limits.h>

struct packed {
    unsigned int i;
    char* p;
};

void op_on_positive_numbers(int x)
{
    assert(x >= 0 && "Number is negative."); // asserts at runtime
}

void clear_stdin(void)
{
    int c;

    do
    {
        c = getchar();
        static_assert(UCHAR_MAX < UINT_MAX, "FI034-C violation"); // asserts at compile time
    } while (c != EOF);
}

int main()
{
    static_assert   // asserts at compile time
    (
        sizeof(struct packed) == sizeof(unsigned int) + sizeof(char*),
        "struct packed must not have any padding"
    );

    // Each compiler comes with a set of flags that can be toggled
    // depending on the stage of development that you are
    // working on (e.g. analysis, debugging, release)
}
