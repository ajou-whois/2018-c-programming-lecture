#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char arr[10];

    memset(arr, 'a', sizeof arr);

    for(int i = 0; i < sizeof arr; i++) printf("%c", arr[i]);
    printf("\n");

    memset(arr, 'b', sizeof arr / 2);

    for(int i = 0; i < sizeof arr; i++) printf("%c", arr[i]);
    printf("\n");

    return 0;
}
