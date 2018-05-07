#include <stdio.h>

int main(void) {
    char char_arr[5][5];
    int int_arr[5][5];

    printf("[char array]\n");
    printf("arr: %lu\n", sizeof char_arr);
    for(int i = 0; i < 5; i++) printf("arr[%d]: %lu\n", i, sizeof char_arr[i]);

    printf("[int array]\n");
    printf("arr: %lu\n", sizeof int_arr);
    for(int i = 0; i < 5; i++) printf("arr[%d]: %lu\n", i, sizeof int_arr[i]);

    return 0;
}
