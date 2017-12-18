//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels. with SYMBOLIC CONSTANTS
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20


int main() {
    for ( int fahr = LOWER; fahr <= UPPER ; fahr += STEP ) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    
    return 0;
}
