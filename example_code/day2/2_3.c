#include <stdio.h>

float devide(float a, float b) {
    if(b == 0) {
        printf("Invalid input.\n");
        return 0;
    } else {
        return a / b;
    }
}

int main(void) {
    float num_a, num_b;
    float result;

    scanf("%f %f", &num_a, &num_b);
    result = devide(num_a, num_b);
    printf("%f\n", result);

    return 0;
}
