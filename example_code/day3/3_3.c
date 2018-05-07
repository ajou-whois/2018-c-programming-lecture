#include <stdio.h>

int main(void) {
    char char_arr[5][5];
    int int_arr[5][5];

    printf("[char array]\n");
    printf("arr: %p\n", char_arr);
    for(int i = 0; i < 5; i++) printf("arr[%d]: %p, &arr[%d][0]: %p\n", i, char_arr[i], i, &char_arr[i][0]);

    printf("[int array]\n");
    printf("arr: %p\n", int_arr);
    for(int i = 0; i < 5; i++) printf("arr[%d]: %p, &arr[%d][0]: %p\n", i, int_arr[i], i, &int_arr[i][0]);

    return 0;
}
