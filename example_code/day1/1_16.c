#include <stdio.h>

#define A 65  // 매크로 상수도 상수이므로 대문자로 씀

int main(void) {
    printf("%d", A);  // printf("%d", 65)와 같은 코드
    return 0;
}
