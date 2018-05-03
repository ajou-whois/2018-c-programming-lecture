#include <stdio.h>

int main(void) {
    char string[14] = "Hello, World!";
    int numbers[5] = {25, 63, 75, 15, 37};

    printf("string size: %u\n", sizeof string);
    printf("string length: %u\n", sizeof string / sizeof (char));

    printf("numbers size: %u\n", sizeof numbers);
    printf("numbers length: %u\n", sizeof numbers / sizeof (int));

    return 0;
}
