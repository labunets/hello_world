//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in cels. and fahr.
//

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = -20;      /* min temp */
    upper = 100;    /* max temp */
    step = 10;      /* step size */
    
    printf("cels  fahr\n----------\n");
    
    celsius = lower;
    while ( celsius <= upper ) {
        fahr = celsius / (5.0 / 9.0) + 32;
        printf("%4.0f %5.0f\n", celsius, fahr);
        celsius += step;
    }
    
    return 0;
}
