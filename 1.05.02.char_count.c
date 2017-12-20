//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// char count, more precision

#include <stdio.h>

int main() {
    double nc;
    
    for ( nc = 0; getchar() != EOF; ++nc ) {
        ;
    }
    printf("%.0f\n", nc);
    
    return 0;
}
