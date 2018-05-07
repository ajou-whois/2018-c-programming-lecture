#include <stdio.h>

void add(int *, int *);
void sub(int [], int []);

int main(void) {
    int a[10] = {39, 75, 14, 26, 36, 52, 24, 48, 50, 64};
    int b[10] = {52, 17, 37, 73, 17, 63, 29, 94, 82, 42};

    add(a, b);
    sub(a, b);

    return 0;
}

void add(int * a, int * b) {
    for(int i = 0; i < 10; i++) printf("%d ", (*(a+i)) + (*(b+i)));
    printf("\n");
}

void sub(int a[], int b[]) {
    for(int i = 0; i < 10; i++) printf("%d ", a[i] - b[i]);
    printf("\n");
}
