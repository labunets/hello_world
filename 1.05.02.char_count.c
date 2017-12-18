//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// char count

#include <stdio.h>

int main() {
    long nc;
    
    nc = 0;
    while (getchar() != EOF ) {
        ++nc;
    }
    printf("%ld\n", nc);
    
    return 0;
}
