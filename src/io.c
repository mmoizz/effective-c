// Chapter 8

#include <stdio.h>
#include <io.h>

int main()
{
    // C provides the FILE object to represent streams.
    // Buffering is the process of temporarily storing
    // data in main memory while it is passing between a
    // process and a device or file.
    // Streams often accumulate data in buffers until
    // they reach a critical mass, at which they are
    // flushed (e.g. when a complete block of data is
    // available for writing)

    // Predefined streams
    //extern FILE* stdin;
    //extern FILE* stdout;
    //extern FILE* stderr;

    FILE* src = fopen("io.c", "r"); // opens io.c in a read-only stream
    // note: don't copy FILE object (can result in undefined behavior)
    // int descriptor = open("io.c", O_RDONLY);  // posix version - use descriptor to
    // refer to stream from place to place

    int val = getchar();
    puts("I");
    puts("am");
    puts("Groot");

    // get file position using ftell and set file position using fseek
    // for arbitrarily large files, use fgetpos and fsetpos instead

    // remove and rename files using remove() and rename() respectively

    fflush(src);
    fclose(src); // close the file - posix: close()
}
