#include <stdio.h>

int main(void) {
    char string[50] = "Hello, World!";
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {3, 2, 1};  // 나머지 7개는 0으로 초기화된다.
    int zero[20] = {0};  // 이러면 모두 다 0으로 초기화된다.
    return 0;
}
