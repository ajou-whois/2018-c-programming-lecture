#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char * ptr = (char *) malloc(10);

    memset(ptr, 'a', sizeof ptr);

    for(int i = 0; i < sizeof ptr; i++) printf("%c", ptr[i]);
    printf("\n");

    memset(ptr, 'b', sizeof ptr / 2);

    for(int i = 0; i < sizeof ptr; i++) printf("%c", ptr[i]);
    printf("\n");

    free(ptr);

    return 0;
}
