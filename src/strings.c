// Chapter 7

#include <string.h>

int main()
{
    char* str1 = "something";       // can check length using strlen
    char str2[] = "something else"; // can check length/size using sizeof

    char str[100] = "Here comes the sun";
    size_t str_size = sizeof(str); // size is 100 
    size_t str_len = strlen(str);  // length is 18

    char str3[] = "Here comes the sun"; // dynamically allocated
    char* str4 = malloc(strlen(str3) + 1); // dynamically allocated
    free(str4);
}
