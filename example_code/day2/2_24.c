#include <stdio.h>

int main(void) {
    int matrix[10][10];

    printf("matrix size: %ld\n", sizeof matrix);
    printf("matrix length: %ld\n", sizeof matrix / sizeof (int));

    return 0;
}
