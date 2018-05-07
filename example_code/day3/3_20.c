#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int * ptr = NULL;

    ptr = (int *) malloc(4);
    printf("[%p]\n", ptr);

    ptr = (int *) realloc(ptr, 20);
    printf("[%p]\n", ptr);

    for(int i = 0; i < 5; i++) ptr[i] = i;
    for(int i = 0; i < 5; i++) printf("%d ", ptr[i]);
    printf("\n");

    free(ptr);

    return 0;
}
