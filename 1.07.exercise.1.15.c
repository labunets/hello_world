//
// Created by Denys Labunets on 12/21/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels. with float arith.
// temps converts by function
//

#include <stdio.h>

float convertTemp(float fahr);

int main() {
    float fahr;
    int lower, upper, step;
    
    lower = 0;      /* min temp */
    upper = 300;    /* max temp */
    step = 20;      /* step size */
    
    fahr = lower;
    while ( fahr <= upper ) {
        printf("%3.0f %6.1f\n", fahr, convertTemp(fahr));
        fahr += step;
    }
    
    return 0;
}

float convertTemp(float fahr) {
    float celsius;
    celsius = (5.0 / 9.0) * (fahr - 32);
    return celsius;
}
