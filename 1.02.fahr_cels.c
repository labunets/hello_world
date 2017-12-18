//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels.
//

#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* min temp */
    upper = 300;    /* max temp */
    step = 20;      /* step size */
    
    fahr = lower;
    while ( fahr <= upper ) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}
