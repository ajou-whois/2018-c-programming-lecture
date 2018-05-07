#include <stdio.h>

int main(void) {
    char char_arr[5];
    short short_arr[5];
    int int_arr[5];
    double double_arr[5];

    printf("[char array]\n");
    printf("arr: %p\n", char_arr);
    for(int i = 0; i < 5; i++) printf("&arr[%d]: %p\n", i, &char_arr[i]);

    printf("[short array]\n");
    printf("arr: %p\n", short_arr);
    for(int i = 0; i < 5; i++) printf("&arr[%d]: %p\n", i, &short_arr[i]);

    printf("[int array]\n");
    printf("arr: %p\n", int_arr);
    for(int i = 0; i < 5; i++) printf("&arr[%d]: %p\n", i, &int_arr[i]);

    printf("[double array]\n");
    printf("arr: %p\n", double_arr);
    for(int i = 0; i < 5; i++) printf("&arr[%d]: %p\n", i, &double_arr[i]);

    return 0;
}
