// Chapter 3

#include <stdio.h>
#include <limits.h>

// Value = ordinary mathematical value
// Represeentation = encoding in bits
// Padding = unused bits to accommodate portability
// Width = total used bits, including sign, excluding padding
// Precision = total used bits, excluding sign and excluding padding

unsigned int ui; // unsigned is required
int i; // assumed signed
unsigned long long ull2; // int can be omitted
unsigned char uc; // unsigned is required

unsigned int wrap = UINT_MAX;
float flo = 1.0f; // typically requires 32 bits (1 sign, 8 exp, 23 significand)
double dub = 2.0; // typically requires 64 bits (1 sign, 11 exp, 52 significand)

int main()
{
    ++wrap;
    printf("wrap = %u\n", wrap);
    --wrap;
    printf("wrap = %u\n", wrap);

    int si = 5;
    short ss = 8;
    long sl = (long)si;
    unsigned short us = (unsigned short)(ss + sl);

    unsigned int iconv = UINT_MAX;
    signed char cconv = -1;
    if (cconv == iconv)
    {
        puts("-1 equals 4,294,967,295");
    }
}
