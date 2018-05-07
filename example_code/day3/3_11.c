#include <stdio.h>

int main(void) {
    char * str = "Hello, World!";
    str[12] = '?';

    printf("%s\n", str);

    return 0;
}
