//
// Created by Denys Labunets on 1/22/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Reverse chars in line
//

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);

void reverse(char line[], int len);

int main() {
    int len;
    char line[MAXLINE];
    
    while ((len = getLine(line, MAXLINE)) > 0 ) {
        reverse(line, len);
        printf("%s", line);
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

void reverse(char line[], int len) {
    int temp, half, endchar, end;
    
    if ( line[len-1] == '\n') {
        end = 1;
    }
    half = (len - 1 - end) / 2;
    endchar = line[len-1];
    for ( int i = 0; i <= half; i++ ) {
        temp = line[i];
        line[i] = line[len-1-i-end];
        line[len-1-i-end] = temp;
    }
    line[len-1] = endchar;
}
