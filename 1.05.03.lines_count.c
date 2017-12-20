//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// lines count
// '\n' == one symbol ASCII 10 line end, "\n" == string

#include <stdio.h>

int main() {
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF) {
        if ( c == '\n' ) {
            ++nl;
        }
    }
    printf("%d\n", nl);
    
    return 0;
}
