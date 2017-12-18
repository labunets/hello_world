//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// spaces, tabs, lines count

#include <stdio.h>

int main() {
    int c;
    int nspaces = 0;
    int ntabs = 0;
    int nlines = 0;
    
    while ((c = getchar()) != EOF) {
        if ( c == ' ' ) {
            ++nspaces;
        }
        if ( c == '\t' ) {
            ++ntabs;
        }
        if ( c == '\n' ) {
            ++nlines;
        }
    }
    printf("Spaces: %d, tabs: %d, lines: %d\n", nspaces, ntabs, nlines);
    
    return 0;
}
