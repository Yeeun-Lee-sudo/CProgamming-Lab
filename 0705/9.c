#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int dan;
    srand(time(NULL));
    dan = rand() % 8 + 2;

    printf("%d단\n", dan);
    printf("==================\n");
    int i = 1;
    while (i<10){
        printf("%d * %d = %d\n", dan, i, dan*i);
        i++;
    }

    return 0;

}
