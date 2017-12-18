//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels. with float arith. and titles
//

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* min temp */
    upper = 300;    /* max temp */
    step = 20;      /* step size */
    
    printf("fahr   cels\n-----------\n");
    
    fahr = lower;
    while ( fahr <= upper ) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
