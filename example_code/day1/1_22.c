#include <stdio.h>

int main(void) {
    int a = 5, b = 8;

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", a << 1);
    printf("%d\n", a >> 1);
    printf("%d\n", ~a);

    return 0;
}
