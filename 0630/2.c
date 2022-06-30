#include <stdio.h>
#include <stdlib.h>

int main() {

    char c;
    scanf(" %c", &c);
    printf("%d %d %d %d\n", c, c+1, c+2, c+3);
    printf("%c %c %c %c\n", c, c+1, c+2, c+3);
    printf("%d %d %d %d\n", c-97, c-96, c-95, c-94);
    return 0;
}
