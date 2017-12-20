//
// Created by Denys Labunets on 12/20/17
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// print chars in words histogram

#include <stdio.h>

#define LEN 20  // max chars in word

int main() {
    int c, i;
    int length[LEN];
    
    for ( i = 0; i < LEN; ++i ) {
        length[i] = 0;
    }
    
    i = 0;
    while ((c = getchar()) != EOF) {
        if ( c == ' ' || c == '\n' || c == '\t' ) {
            if ( i > 0 ) {
                ++length[i];
            }
            i = 0;
        } else {
            ++i;
        }
    }
    
    for ( i = 0; i < LEN; ++i ) {
        if ( length[i] > 0 ) {
            printf("%2d ", i);
            for ( int j = 0; j < length[i]; ++j ) {
                printf("-");
            }
            printf("\n");
        }
    }
    
    return 0;
}
