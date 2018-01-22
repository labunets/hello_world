//
// Created by Denys Labunets on 1/22/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Replace Spaces with Tabs
//

#include <stdio.h>

#define TABLEN 4

int main() {
    char c;
    int needle;
    int counter = 0;
    
    while ( (c = getchar()) != EOF ) {
        needle = 1;
        counter = 0;
        while ( c != '\n' ) {
            if ( c == ' ' ) {
                ++counter;
                if ( needle % TABLEN == 0 ) {
                    putchar('\t');
                    counter = 0;
                }
            } else {
                if ( counter > 0 ) {
                    for ( int j = 0; j < counter; j++ ) {
                        putchar(' ');
                    }
                    counter = 0;
                }
                putchar(c);
            }
            c = getchar();
            ++needle;
        }
        printf("\n");
    }
    
    return 0;
}
