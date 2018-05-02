#include <stdio.h>

int recursive_sum(int n) {
    if(n == 0) return 0;
    else return n + recursive_sum(n-1);
}

int main(void) {
    int result;
    result = recursive_sum(100);
    printf("Sum: %d\n", result);
    return 0;
}
