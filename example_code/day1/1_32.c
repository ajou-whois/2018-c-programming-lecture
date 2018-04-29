#include <stdio.h>

int main(void) {
    for(int i = 1; i <= 10; i++) {
        if(i % 2) continue;
        printf("%d는 짝수\n", i);
    }
    return 0;
}
