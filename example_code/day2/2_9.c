#include <stdio.h>

void func(void) {
    int var = 5;
    printf("var: %d\n", var);
}

int main(void) {
    func();
    printf("var: %d\n", var);
    return 0;
}
