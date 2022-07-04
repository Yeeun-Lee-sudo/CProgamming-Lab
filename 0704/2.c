#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("AND : %08X\n", 9&10);
    printf("OR : %08X\n", 9|10);
    printf("NOR : %08X\n", 9^10);
    printf("NOT : %08X\n", ~9);
    printf("<< : %08X\n", 4 << 1);
    printf("> : %08X\n", 4 >> 1);

    return 0;
}
