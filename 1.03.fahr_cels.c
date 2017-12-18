//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print temp table in fahr. and cels.
//

#include <stdio.h>

int main() {
    for ( int fahr = 0; fahr <= 300 ; fahr += 20 ) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    
    return 0;
}
