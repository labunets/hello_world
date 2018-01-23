//
// Created by Denys Labunets on 1/23/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Data types
//
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    char c;
    short int si;
    int i;
    long int li;
    unsigned char uc;
    unsigned short int usi;
    unsigned int ui;
    unsigned long int uli;
    float f, fMin, fMax;
    double d, dMin, dMax;
    long double ld, ldMin, ldMax;
    
    printf("Size, MIN, MAX of data types:\n");
    printf("%zu, %d, %d = char\n", sizeof(c), CHAR_MIN, CHAR_MAX);
    printf("%zu, %d, %d = char\n", sizeof(c), -(char)((unsigned char)~0>>1)-1, (char)((unsigned char)~0>>1));
    printf("%zu, %d, %d = unsigned char\n", sizeof(uc), 0, UCHAR_MAX);
    printf("%zu, %d, %d = unsigned char\n", sizeof(uc), 0, (unsigned char)~0);
    printf("\n");
    printf("%zu, %d, %d = short int\n", sizeof(si), SHRT_MIN, SHRT_MAX);
    printf("%zu, %d, %d = short int\n", sizeof(si), -(short)((unsigned short)~0>>1)-1, (short)((unsigned short)~0>>1));
    printf("%zu, %u, %u = unsigned short int\n", sizeof(usi), 0, USHRT_MAX);
    printf("%zu, %u, %u = unsigned short int\n", sizeof(usi), 0, (unsigned short)~0);
    printf("\n");
    printf("%zu, %d, %d = int\n", sizeof(i), INT_MIN, INT_MAX);
    printf("%zu, %d, %d = int\n", sizeof(i), -(int)((unsigned int)~0>>1)-1, (int)((unsigned int)~0>>1));
    printf("%zu, %u, %u = unsigned int\n", sizeof(ui), 0, UINT_MAX);
    printf("%zu, %u, %u = unsigned int\n", sizeof(ui), 0, (unsigned int)~0);
    printf("\n");
    printf("%zu, %ld, %ld = long int\n", sizeof(li), LONG_MIN, LONG_MAX);
    printf("%zu, %ld, %ld = long int\n", sizeof(li), -(long)((unsigned long)~0>>1)-1, (long)((unsigned long)~0>>1));
    printf("%zu, %u, %lu = unsigned long int\n", sizeof(uli), 0, ULONG_MAX);
    printf("%zu, %u, %lu = unsigned long int\n", sizeof(uli), 0, (unsigned long)~0);
    printf("\n");
    printf("%zu, %g, %g = float\n", sizeof(f), FLT_MIN, FLT_MAX);
    f = fMin = 0.01;
    while ( f > 0.0 ) {
        fMin = f;
        f *= 0.1;
    }
    f = fMax = 100500.0;
    printf("%zu, %g, %g = float\n", sizeof(fMin), fMin, fMax);
    printf("\n");
    printf("%zu, %g, %g = double\n", sizeof(d), DBL_MIN, DBL_MAX);
    d = dMin = 0.01;
    while ( d > 0.0 ) {
        dMin = d;
        d *= 0.1;
    }
    d = dMax = 100500.0;
    printf("%zu, %g, %g = double\n", sizeof(d), dMin, dMax);
    printf("\n");
    printf("%zu, %LG, %LG = long double\n", sizeof(ld), LDBL_MIN, LDBL_MAX);
    ld = ldMin = 0.01;
    while ( ld > 0.0 ) {
        ldMin = ld;
        ld *= 0.1;
    }
    ld = ldMax = 100500.0;
    printf("%zu, %LG, %LG = long double\n", sizeof(ld), ldMin, ldMax);
    printf("\n");
    
    return 0;
}
