#include <stdio.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main(void) {
    char option;
    float a, b;
    float (* func) (float, float) = NULL;  // 포인터이므로 NULL로 초기화

    scanf("%f %c %f", &a, &option, &b);

    switch(option) {
        case '+':
            func = &add;
            break;
        case '-':
            func = &sub;
            break;
        case '*':
            func = &mul;
            break;
        case '/':
            func = &div;
            break;
    }

    printf("%f\n", func(a, b));

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    return a / b;
}
