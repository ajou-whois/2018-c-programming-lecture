#include <stdio.h>

int main(void) {
    char string[14] = "Hello, World!";
    int numbers[5] = {25, 63, 75, 15, 37};

    printf("string size: %ld\n", sizeof string);
    printf("string length: %ld\n", sizeof string / sizeof (char));

    printf("numbers size: %ld\n", sizeof numbers);
    printf("numbers length: %ld\n", sizeof numbers / sizeof (int));

    return 0;
}
