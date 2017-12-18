//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Using getchar & putchar
//

#include <stdio.h>

int main() {
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    
    return 0;
}
