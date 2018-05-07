#include <stdio.h>

int main(void) {
    int arr[10] = {9, 2, 0 ,4 ,6, 1, 8, 3, 7, 5};
    int * ptr = arr;

    for(int i = 0; i < 10; i++) printf("%d ", *(ptr + i));
    printf("\n");

    return 0;
}
