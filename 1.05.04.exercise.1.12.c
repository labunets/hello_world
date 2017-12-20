//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print one word in line

#include <stdio.h>

int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if ( c == ' ' || c == '\n' || c == '\t' ) {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
