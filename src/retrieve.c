// Chapter 2, Ex. 1

#include <stdio.h>

int* increment()
{
    static int counter = 0;
    ++counter;
    return &counter;
}

void retrieve(int* counter)
{
    printf("Counter: %d.\n", *counter);
}

int main()
{
    int* counter = increment();
    for (int i = 0; i < 4; ++i)
    {
        increment();
        retrieve(counter);
    }
}
