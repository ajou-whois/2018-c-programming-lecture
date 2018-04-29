#include <stdio.h>

int main(void) {
    char str1[] = "hello, world!";  // string constant
    char str2[] = "hello, " "world!";  // 컴파일시에 이어붙여진다.

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
