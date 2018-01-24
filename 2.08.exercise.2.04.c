//
// Created by Denys Labunets on 1/24/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Delete s2 chars from s1
//

#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j, k;
    
    i = j = k = 0;
    for ( ; s2[i] != '\0'; i++ ) {
        for ( j = k = 0; s1[j] != '\0'; j++) {
            if ( s1[j] != s2[i] ) {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
}

int main() {
    char s1[] = "hello my little girl";
    char s2[] = "li";
    
    squeeze(s1, s2);
    printf("%s\n", s1);
    
    return 0;
}
