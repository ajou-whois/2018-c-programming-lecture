#include <stdio.h>

int main(void) {
    char string[14] = "Hello, World!";
    int numbers[4];

    numbers[0] = 15;
    numbers[1] = 27;
    numbers[2] = 41;
    numbers[3] = 85;

    printf("%c\n", string[4]);  // o
    printf("%c\n", string[7]);  // W

    printf("%d\n", numbers[0]);  // 15
    printf("%d\n", numbers[3]);  // 85

    return 0;
}
