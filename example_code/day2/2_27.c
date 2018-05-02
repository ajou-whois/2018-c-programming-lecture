#include <stdio.h>

int main(void) {
    int var = 10;
    int * ptr = &var;

    printf("ptr: %p\n", ptr);
    printf("&var: %p\n", &var);

    printf("var: %d\n", var);
    printf("*ptr: %d\n", *ptr);

    *ptr = 20;

    printf("var: %d\n", var);
    printf("*ptr: %d\n", *ptr);

    return 0;
}
