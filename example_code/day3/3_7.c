#include <stdio.h>

int main(void) {
    int value = 5;
    void * ptr = &value;

    printf("%d\n", *ptr);

    return 0;
}
