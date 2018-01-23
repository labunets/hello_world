//
// Created by Denys Labunets on 1/23/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
//  Constants
//

#include <stdio.h>

int main() {
    enum escapes { TAB = '\t', NEWLINE = '\n' };
    enum month { JAN = 1, FEB, MAR };
    
    printf("hello, world\n");
    printf("hello, " "world\n");
    printf("FEB%c=%c%d%c", TAB, TAB, FEB, NEWLINE);
    
    return 0;
}
