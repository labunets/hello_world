#include <stdio.h>

int main() {
    int a = 0;
    int b = 5;

    printf("%d > %d = % d\n", a, b, a>b);
    printf("%d < %d = % d\n", a, b, a<b);
    printf("%d == %d = % d\n", a, b, a==b);
    printf("%d != %d = % d\n", a, b, a!=b);
    printf("%d || %d = % d\n", a, b, a||b);
    printf("%d && %d = % d\n", a, b, a&&b);
    printf("!%d = % d\n", a, !a);

    return 0;
}
