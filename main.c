#include <stdio.h>

#define TABLEN 4

int main() {
    int nextTab, needle;
    char c;
    
    while ( (c = getchar()) != EOF ) {
        needle = 0;
        while ( c != '\n' ) {
            if ( c == '\t' ) {
                nextTab = TABLEN - needle % TABLEN;
                for ( int i = 0; i < nextTab; i++ ) {
                    putchar(' ');
                    ++needle;
                }
            } else {
                putchar(c);
                ++needle;
            }
            c = getchar();
        }
        printf("\n");
    }
    
    return 0;
}
