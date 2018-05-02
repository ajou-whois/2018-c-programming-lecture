#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int a = 5, b = 3;

    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int * a_ptr, int * b_ptr) {
    void * temp_ptr = a_ptr;
    a_ptr = b_ptr;
    b_ptr = temp_ptr;
    printf("a: %d, b: %d\n", *a_ptr, *b_ptr);
}
