#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if(a == 1) goto ONE;
    if(a == 2) goto TWO;

ONE:
    printf("Input is 1\n");
    return 0;
TWO:
    printf("Input is 2\n");
    return 0;
}
