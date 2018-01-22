//
// Created by Denys Labunets on 1/22/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Checks syntax
//

#include <stdio.h>

#define CHECKS 8
#define SLASH 92

int main() {
    int chars[] = { '(', ')', '{', '}', '\"', '\'', '[', ']' };
    int counts[CHECKS];
    int c1, c2;
    
    c1 = c2 = 0;
    for ( int k = 0; k < CHECKS; k++ ) {
        counts[k] = 0;
    }
    while ( (c2 = getchar()) != EOF ) {
        for ( int i = 0; i < CHECKS; i++ ) {
            if ( c1 != SLASH && c2 == chars[i] ) {
                ++counts[i];
            }
        }
        c1 = c2;
    }
    for ( int j = 0; j < CHECKS; j++ ) {
        printf("%c = %d\n", chars[j], counts[j]);
    }
    if ( counts[0] == counts[1] &&
         counts[2] == counts[3] &&
         counts[6] == counts[7] ) {
        printf("Correct!\n");
    }
    
    return 0;
}
