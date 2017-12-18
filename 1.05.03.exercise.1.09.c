//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// replace spaces by one

#include <stdio.h>

int main(void) {
    int c;
    int inspace;
    
    inspace = 0;
    while ((c = getchar()) != EOF) {
        if ( c == ' ' ) {
            if ( inspace == 0 ) {
                inspace = 1;
                putchar(c);
            }
        } else {
            inspace = 0;
            putchar(c);
        }
    }
    
    return 0;
}
