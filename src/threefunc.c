// Chapter 2, Ex. 2

#include <stdio.h>

void foo()
{
    puts("foo");
}
void bar()
{
    puts("bar");
}
void baz()
{
    puts("baz");
}

int main()
{
    void (*funcarr[3])();
    funcarr[0] = foo;
    funcarr[1] = bar;
    funcarr[2] = baz;

    for (int i = 0; i < 3; ++i)
    {
        (*funcarr[i])();
    }
}
