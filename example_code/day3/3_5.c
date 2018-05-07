#include <stdio.h>

int func(int, int);

int main(void) {
    int (* sum) (int, int) = &func;
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));

    return 0;
}

int func(int a, int b) {
    return a + b;
}
