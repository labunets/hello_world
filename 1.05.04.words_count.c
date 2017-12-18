//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// words count

#include <stdio.h>

#define IN 1    // in word
#define OUT 0   // out of word

int main() {
    int c, nc, nl, nw, state;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if ( c == '\n' ) {
            ++nl;
        }
        if ( c == ' ' || c == '\n' || c == '\t' ) {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
    
    return 0;
}
