//
// Created by Denys Labunets on 1/22/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Removes comments
//
// comments
/*
 * comments
 */


#include <stdio.h>

int main() {
    int c1, c2, inComment, commType;
    
    inComment = commType = c1 = 0;
    while ( (c2 = getchar()) != EOF) {
        if ( c2 == '/' && !inComment && !commType ) {
            inComment = 1;
        } else if ( c2 == '/' && inComment && !commType) {
            commType = 1;
        } else if ( c2 == '*' && inComment && !commType) {
            commType = 2;
        } else if ( c2 == '*' && commType == 2 ) {
            c1 = c2;
        } else if ( c1 == '*' && c2 == '/' && commType == 2 ) {
            inComment = commType = 0;
            c1 = c2 = 0;
        } else if ( commType == 1 && c2 == '\n' ) {
            inComment = commType = 0;
            putchar('\n');
            c1 = c2 = 0;
        } else if ( !commType ) {
            inComment = commType = 0;
        }
        if ( !commType && c1 != 0) {
            putchar(c1);
        }
        c1 = c2;
    }
    
    return 0;
}
