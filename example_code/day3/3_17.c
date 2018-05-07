#include <stdio.h>

typedef int * INT_PTR;

void swap(INT_PTR, INT_PTR);

int main(int argc, char * argv[]) {
    int a = 5, b = 3;

    printf("a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(INT_PTR a, INT_PTR b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
