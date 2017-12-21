//
// Created by Denys Labunets on 12/21/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// function power - less vars
//

#include <stdio.h>

int power(int m, int n);

int main() {
    int i;
    
    for ( i = 0; i < 10; ++i ) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    
    return 0;
}

int power(int base, int n) {
    int p;
    
    for ( p = 1; n > 0 ; --n ) {
        p = p * base;
    }
    
    return p;
}
