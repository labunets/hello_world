//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// replace special chars

#include <stdio.h>

int main(void) {
    int c;
    
    while ((c = getchar()) != EOF) {
        if ( c == '\t' ) {
            printf("\\t");
        } else if ( c == '\b') {
            printf("\\b");
        } else if ( c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
