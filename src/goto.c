// Chapter 5, Ex. 1

#include <stdio.h>

int do_something(void)
{
    FILE* file1;
    FILE* file2;
    int ret_val = 0; // Initially assume a successful return value

    file1 = fopen("a_file", "w");
    if (file1 == NULL)
    {
        ret_val = -1;
        puts("a_file failed to open.");
        goto FAIL_FILE1;
    }

    file2 = fopen("another_file", "w");
    if (file2 == NULL)
    {
        ret_val = -1;
        puts("another_file failed to open.");
        goto FAIL_FILE2;
    }

    fclose(file2);
FAIL_FILE2:
    fclose(file1);
FAIL_FILE1:
    return ret_val;
}
