#include <stdio.h>

void func(void) {
    int var = 20;
    printf("%d\n", var);
}

int main(void) {
    int var = 10;
    printf("%d\n", var);
    func();
    return 0;
}
