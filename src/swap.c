// Chapter 2

#include <stdio.h>

void swap(int*, int*); // forward declaration

int main(void)
{
    int a = 21;
    int b = 17;

    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// This fails because C is a "pass-by-value" language
// meaning that the value of the provided arguments is
// copied into *new* variables on function call.
// The original arguments remain unchanged.
// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;
//     printf("swap: a = %d, b = %d\n", a, b);
// }
