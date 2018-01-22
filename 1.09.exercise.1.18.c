//
// Created by Denys Labunets on 1/21/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Removes whitespaces from the end of lines
//

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);

void printLine(char line[], int len);

int main() {
    int len;
    char line[MAXLINE];
    
    while ((len = getLine(line, MAXLINE)) > 0 ) {
        printLine(line, len);
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
    }
    s[i] = '\0';
    
    return i;
}

void printLine(char line[], int len) {
    int end;
    
    end = line[len-1];
    if ( len > 1 ) {
        for ( int i = len - 2; line[i] == ' ' || line[i] == '\t'; --i ) {
            line[i] = '\0';
            --len;
        }
        line[len-1] = end;
        printf("%s", line);
    }
}
