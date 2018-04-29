#include <stdio.h>

int main(void) {
    int a = 10;

    printf("size of a: %ld", sizeof a);
    printf("size of int: %ld", sizeof (int));  // 자료형에는 괄호를 쓴다

    return 0;
}
