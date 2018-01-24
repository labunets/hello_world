#include <stdio.h>
#include <math.h>

int main() {
    unsigned int i = ~0;
    unsigned char c = 100;
    double d;

    c = i;
    i = c;
    d = i;
    printf("%g\n", sqrt(d));

    return 0;
}
