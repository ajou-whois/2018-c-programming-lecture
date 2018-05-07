#include <stdio.h>

int main(void) {
    int value = 123;
    int * ptr = &value;
    int ** double_ptr = &ptr;
    int *** triple_ptr = &double_ptr;

    printf("ptr: %p, &value: %p, *ptr: %d\n", ptr, &value, *ptr);
    printf("double_ptr: %p, &ptr: %p, **double_ptr: %d\n", double_ptr, &ptr, **double_ptr);
    printf("triple_ptr: %p, &double_ptr: %p, ***triple_ptr: %d\n", triple_ptr, &double_ptr, ***triple_ptr);

    return 0;
}
