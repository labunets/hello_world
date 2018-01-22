//
// Created by Denys Labunets on 1/22/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Word wrap
//

#include <stdio.h>

#define MAXLINE 1000
#define MINLINE 80

int getLine(char line[], int maxline);

void wordWrap(char line[], int len);

int main() {
    int len;
    char line[MAXLINE];
    
    while ((len = getLine(line, MAXLINE)) > 0 ) {
        wordWrap(line, len);
        printf("%s", line);
    }
    
    return 0;
}

int getLine(char line[], int maxline) {
    int c, i;
    
    for ( i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i ) {
        line[i] = c;
    }
    if ( c == '\n' ) {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    
    return i;
}

void wordWrap(char line[], int len) {
    int needle;
    
    if ( len > MINLINE ) {
        needle = MINLINE;
        while ( needle < len ) {
            while ( line[needle] != ' ' && line[needle] != '\t' ) {
                --needle;
            }
            line[needle] = '\n';
            needle = needle + MINLINE;
        }
    }
}
