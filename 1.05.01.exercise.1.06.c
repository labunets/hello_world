//
// Created by Denys Labunets on 12/18/17.
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// Using getchar & putchar. Check getchar() != EOF for one or zero
//

#include <stdio.h>

int main() {
    int c;
    
    while (c = getchar() != EOF) {
        printf("c = %d\n", c);
    }
    
    return 0;
}
