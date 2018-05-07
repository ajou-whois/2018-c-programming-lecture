#include <stdio.h>

int main(void) {
    int matrix[10][10];

    printf("matrix size: %u\n", sizeof matrix);
    printf("matrix length: %u\n", sizeof matrix / sizeof (int));

    return 0;
}
