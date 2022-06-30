#include <stdio.h>
#include <stdlib.h>

int main() {

    int input, min, sec;

    scanf("%d", &input);

    min = input / 60;
    sec = input % 60;

    printf("%dseconds is %dm %ds\n", input, min, sec);

    return 0;

}
