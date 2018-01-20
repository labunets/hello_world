//
// Created by Denys Labunets on 1/18/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// char arrays with getline() counts more than MAXLINE
//

#include <stdio.h>

#define MAXLINE 10

int getLine(char line[], int maxline);

void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0 ) {
        if ( len > max ) {
            max = len;
            copy(longest, line);
        }
    }
    if ( max > 0 ) {
        printf("%d %s", max, longest);
        if ( max > MAXLINE ) {
            printf("\n");
        }
    }
    
    return 0;
}

int getLine(char s[], int lim) {
    int c, i;
    
    for ( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i ) {
        s[i] = c;
    }
    if ( c == '\n' ) {
        s[i] = c;
        ++i;
        s[i] = '\0';
    } else if ( c != EOF ) {
        s[i] = '\0';
        while ( (c = getchar()) != EOF && c != '\n' ) {
            ++i;
        }
    }
    
    return i;
}

void copy(char to[], char from[]) {
    int i;
    
    i = 0;
    while ( (to[i] = from[i]) != '\0' ) {
        ++i;
    }
}