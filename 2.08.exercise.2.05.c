//
// Created by Denys Labunets on 1/24/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Find first s2 position in s1
//

#include <stdio.h>

int any(char *s1, char *s2) {
    int i, j;
    
    i = j = 0;
    for ( ; s2[i] != '\0'; i++ ) {
        for ( j = 0; s1[j] != '\0'; j++) {
            if ( s1[j] == s2[i] ) {
                return j;
            }
        }
    }
    return -1;
}

int main() {
    char s1[] = "hello my little girl";
    char s2[] = "li";
    
    printf("%d\n", any(s1, s2));
    
    return 0;
}
