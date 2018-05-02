#include <stdio.h>

int a = 5;

void func_one(void) {
    a += 5;
    printf("%d\n", a);
}

void func_two(void) {
    a += 5;
    printf("%d\n", a);
}

int main(void) {
    printf("%d\n", a);
    func_one();
    func_two();
    printf("%d\n", a);
    return 0;
}
