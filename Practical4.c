#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>
#include<stdint.h>
int main()
{
    printf("=== Data Type Sizes and Ranges in C ===\n\n");

// CHAR
    printf("char:\n");
    printf("  Size: %zu bytes\n", sizeof(char));
    printf("  Range: %d to %d\n\n", CHAR_MIN,CHAR_MAX);


//UNSIGNED CHAR
    printf("unsigned char:\n");
    printf("  Size: %zu bytes\n", sizeof(unsigned char));
    printf("  Range: 0 to %u\n\n", UCHAR_MAX);

//INT
    printf("int:\n");
    printf("  Size: %zu bytes\n", sizeof(int));
    printf("  Range: %d to %d\n\n", INT_MIN,INT_MAX);

//UNSIGNED INT
    printf("unsigned int:\n");
    printf("  Size: %zu bytes\n", sizeof(unsigned int));
    printf("  Range: 0 to %u\n\n", UINT_MAX);

    //SHORT
    printf("short:\n");
    printf("  Size: %zu bytes\n", sizeof(short));
    printf("  Range: %d to %d\n\n", SHRT_MIN,SHRT_MAX);

//LONG
    printf("long:\n");
    printf("  Size: %zu bytes\n", sizeof(long));
    printf("  Range: %ld to %ld\n\n", LONG_MIN,LONG_MAX);

    //LONG LONG
    printf("long long:\n");
    printf("  Size: %zu bytes\n", sizeof(long long));
    printf("  Range: %lld to %lld\n\n", LLONG_MIN,LLONG_MAX);


//UNSIGNED LONG
    printf("unsigned long:\n");
    printf("  Size: %zu bytes\n", sizeof(unsigned long));
    printf("  Range: 0 to %lu\n\n", ULONG_MAX);

    //FLOAT
    printf("float:\n");
    printf("  Size: %zu bytes\n", sizeof(float));
    printf("  Range: %.10e to %.10e\n\n", FLT_MIN,FLT_MAX);

    //DOUBLE
    printf("long double:\n");
    printf("  Size: %zu bytes\n", sizeof(double));
    printf("  Range: %.10e to %.10e\n\n", DBL_MIN,DBL_MAX);

    // LONG DOUBLE
    printf("long double:\n");
    printf("  Size: %zu bytes\n", sizeof(long double));
    printf("  Range: %.10Le to %.10Le\n\n", LDBL_MIN,LDBL_MAX);

    //SIZE_t
    printf("size_t:\n");
    printf("  Size: %zu bytes\n", sizeof(size_t));
    printf("  max value: %zu\n\n", (size_t) -1);

    //ptrdiff_t
    printf("ptrdiff_t:\n");
    printf("  Size: %zu bytes\n", sizeof(ptrdiff_t));
    printf("  Range: %td to %td\n\n", PTRDIFF_MIN, PTRDIFF_MAX);

}
