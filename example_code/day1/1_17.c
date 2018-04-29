#include <stdio.h>

int main(void) {
    const int A = 999;
    printf("%d\n", A + 1);  // A + 1은 컴파일시에 연산되어 1000으로 바뀐다

    return 0;
}
