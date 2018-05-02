#include <stdio.h>

void c(void) {
    int c = 15;
    printf("c: %d\n", c);
}

void b(void) {
    int b = 5;
    printf("b: %d\n", b);
    b += 5;
    printf("b: %d\n", b);
    c();
}

int main(void) {
    int a = 10;
    printf("a: %d\n", a);
    b();
    return 0;
}
