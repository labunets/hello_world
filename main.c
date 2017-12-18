//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Using getchar & putchar (copy input stream to output)
//

#include <stdio.h>

int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    
    return 0;
}
