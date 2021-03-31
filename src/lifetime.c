// Chapter 2

#include <stdio.h>

int g;              // global - static lifetime

void increment()
{
    static unsigned int counter = 0;       // scoped static - static lifetime
    counter++;
    printf("%d", counter);
}

void incrementlocal()
{
    unsigned int counter = 0;               // scoped local - automatic/block lifetime
    counter++;
    printf("%d", counter);
}

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        increment();
    }
    for (int i = 0; i < 5; ++i)
    {
        incrementlocal();
    }
}
