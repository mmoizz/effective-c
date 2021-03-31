// Chapter 2

#include <stdbool.h>
#include <wchar.h>

// Boolean
_Bool flag1 = 0;
bool flag2 = false;

// Character
char a = 'a';
signed char b = 'b';
unsigned char c = 'c';
wchar_t d = 'ハ';

// Number
signed char negativeone = -1;
short negativetwo = -2;
int negativethree = -3;
long int negativefour = -4;
long long int negativefive = -5;
unsigned char one = 1;
unsigned short two = 2;
unsigned int three = 3;
unsigned long int four = 4;
unsigned long long int five = 5;

// Enumeration - value backed by int
enum day
{
    sun,
    mon,
    tues,
    wed,
    thurs,
    fri,
    sat
};

// Floating Point Number
float f = 1.0f;
double dub = 2.0;
long double ldub = 3.0;

// Void
void* acoolptr = 0;

// Function
int foo(void);
int *fip();                 // In C (contra C++), empty paramater list in declaration accepts 
void goo(int i, int j);     // any number of arguments of any type (use void to correct)
void hoo(int, int);

// Derived
// -- Pointer
int* ip;
char* cp;
void* vp;
int val = 17;
int* pval = &val;

// -- Array
int arr[5];
float* farr[6];
int matr[3][5];

// -- Structures
struct sigrecord 
{
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;

// -- Union
union
{
    struct
    {
        int type;
    } n;
    struct
    {
        int type;
        int intnode;
    } ni;
    struct
    {
        int type;
        double doublenode;
    } nf;
} u;

// Note: Names provided to struct, union, and enum declarations are 'tags', not 'types'.
// This means that to declare a variable, you must preface the tag with the type, e.g.:
// struct awesomestruct ident;
// enum awesomeenum ident;
// union awesomeunion ident;

// Qualifiers
const int ci = 0;   // Integer cannot be changed
volatile int vi;    // May change outside of the program
int* restrict rp;   // Pointer can be optimized 

void main()
{
    // no op
}
