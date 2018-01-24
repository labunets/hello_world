//
// Created by Denys Labunets on 1/24/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// HEX to DEC
//

#include <stdio.h>

#define LEN 10

int htoi(char s[]) {
    int i = 0;
    int number = 0;
    char lowc;
    
    if ( s[1] == 'x' || s[1] == 'X' ) {
        i = 2;
    }
    for ( ; s[i] != '\0'; ++i ) {
        if ( '0' <= s[i] && s[i] <= '9') {
            number = number * 16 + s[i] - '0';
        }
        lowc = s[i] | 32;
        if ( 'a' <= lowc && lowc <= 'f') {
            number = number * 16 + s[i] - 'a' + 10;
        }
    }
    
    return number;
}

int main() {
    char s[LEN+1];
    int i = 0;
    
    scanf("%s", s);
    printf("%d\n", htoi(s));
    
    return 0;
}
