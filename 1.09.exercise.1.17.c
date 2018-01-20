//
// Created by Denys Labunets on 1/21/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Print strings more than MAXLINE
//

#include <stdio.h>

#define MAXLINE 80

int main() {
    int c, i;
    char str[MAXLINE];
    
    while ( (c = getchar()) != EOF ) {
        for ( i = 0; i < MAXLINE - 1 && c != EOF && c != '\n'; ++i ) {
            str[i] = c;
            c = getchar();
        }
        str[i] = '\0';
        if ( i == MAXLINE - 1 ) {
            printf("%s", str);
            while ( c != EOF && c != '\n' ) {
                printf("%c", c);
                c = getchar();
            }
            if ( c == '\n' ) {
                printf("\n");
            }
        }
    }
    
    return 0;
}
