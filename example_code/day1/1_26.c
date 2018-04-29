#include <stdio.h>

int main(void) {
    char a[] = "Hello, World!";
    printf(a);  // 허용되지만 절대 사용해서는 안 됨
                // FSB 취약점
    return 0;
}
