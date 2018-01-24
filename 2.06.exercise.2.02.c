//
// Created by Denys Labunets on 1/24/18
// Copypasted from C lang book by Brian Kernighan and Dennis Ritchie
//
// for loop analog without && and ||
//

int main() {
    int i, c;
    int lim = 10;
    int flag = 1;
    char s[lim+1];
    
    for ( i = 0; flag == 1; ++i ) {
        flag = 0;
        if ( i < lim ) {
            if ((c = getchar()) != 'n' ) {
                if ( c != EOF ) {
                    s[i] =c;
                    flag = 1;
                }
            }
        } else {
            s[i] = '\0';
        }
    }
    printf("%s", s);
    
    return 0;
}