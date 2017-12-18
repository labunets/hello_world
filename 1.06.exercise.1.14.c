//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print chars count

#include <stdio.h>

#define STARTCHAR 32
#define ENDCHAR 122

int main() {
    int c;
    int clen = ENDCHAR - STARTCHAR;
    int chars[clen];
    
    for ( int i = 0; i < clen; ++i ) {
        chars[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        ++chars[c-STARTCHAR];
    }
    
    for ( int i = 0; i < clen; ++i ) {
        if ( chars[i] > 0 ) {
            putchar(i + STARTCHAR);
            printf(" = %d\n", chars[i]);
        }
    }
    
    return 0;
}
