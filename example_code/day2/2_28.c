#include <stdio.h>

int main(void) {
    char * char_ptr = 0x100;
    short * short_ptr = 0x100;
    int * int_ptr = 0x100;
    double * double_ptr = 0x100;

    printf("char_ptr: %p\n", char_ptr++);
    printf("char_ptr: %p\n", char_ptr++);
    printf("char_ptr: %p\n", char_ptr);

    printf("short_ptr: %p\n", short_ptr++);
    printf("short_ptr: %p\n", short_ptr++);
    printf("short_ptr: %p\n", short_ptr);

    printf("int_ptr: %p\n", int_ptr++);
    printf("int_ptr: %p\n", int_ptr++);
    printf("int_ptr: %p\n", int_ptr);

    printf("double_ptr: %p\n", double_ptr++);
    printf("double_ptr: %p\n", double_ptr++);
    printf("double_ptr: %p\n", double_ptr);

    return 0;
}
