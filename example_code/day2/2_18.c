#include <stdio.h>

int main(void) {
    char string[14] = "Hello, World!";
    int numbers[5] = {25, 63, 75, 15, 37};

    for(int i = 0; i < 14; i++) printf("%c ", string[i]);
    printf("\n");

    for(int i = 0; i < 5; i++) printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}
