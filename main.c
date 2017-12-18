//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels. with float arith.
//

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* min temp */
    upper = 300;    /* max temp */
    step = 20;      /* step size */
    
    fahr = lower;
    while ( fahr <= upper ) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
