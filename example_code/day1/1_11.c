#include <stdio.h>

int main(void) {
    int char_a = 'a';  // 'a' == 97
    int octal_a = '\141'; // 0o141 == 97
    int hexadecimal_a = '\x61'; // 0x61 == 97

    printf("%d\n", char_a);
    printf("%d\n", octal_a);
    printf("%d\n", hexadecimal_a);

    return 0;
}
