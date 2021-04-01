// Chapter 6

#include <stdlib.h>

void foo(size_t size) 
{
    // int vla[size];  // demonstrates VLA usage (although doesn't work on MSVC)
    //...
}

typedef struct
{
    size_t num;
    int data[];         // flexible array member (must be last member of struct)
} widget;

int stat; // this will exist for the lifetime of the program

int main()
{
    int automatic; // this will be destroyed at the end of the block
    int* allocated = malloc(sizeof(int)); // this memory will be captured until explicitly destroyed
    if (allocated == NULL)
    {
        // handle allocation error
    }
    memcpy(allocated, 5, sizeof(int)); // memory is initialized here
    free(allocated); // the object is deallocated here
    allocated = NULL; // set ptr to null after freeing to prevent vulnerabilities
}
