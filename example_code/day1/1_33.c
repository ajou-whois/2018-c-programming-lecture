#include <stdio.h>

int main(void) {
    int i = 0;
    while(1) {
        printf("%d\n", i);
        if(i == 10) break;
        i++;
    }
}
