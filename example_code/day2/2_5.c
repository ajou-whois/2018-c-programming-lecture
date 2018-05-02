#include <stdio.h>

int sum(int a, int b);

int main(void) {
    int num_a, num_b;
    int result;

    scanf("%d %d", &num_a, &num_b);
    result = sum(num_a, num_b);
    printf("%d\n", result);

    return 0;
}

int sum(int a, int b) {
    int temp = a + b;
    return temp;
}
