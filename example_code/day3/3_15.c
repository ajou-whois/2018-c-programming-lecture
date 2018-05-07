#include <stdio.h>

void add(int [][2], int [][2]);
void sub(int (*)[2], int (*)[2]);

int main(void) {
    int a[2][2] = { {3, 5},
                    {2, 7} };
    int b[2][2] = { {6, 1},
                    {9, 3} };

    add(a, b);
    sub(a, b);

    return 0;
}

void add(int a[][2], int b[][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    };
}

void sub(int (* a)[2], int (* b)[2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) printf("%d ", *(*(a+i)+j) - *(*(b+i)+j));
        printf("\n");
    }
}
