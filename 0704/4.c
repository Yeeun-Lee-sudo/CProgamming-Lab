#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    double d;

    d = (double)5/4;
    printf("%f\n", d);

    d = 5.0/4;
    printf("%f\n", d);

    d = (double)5/(double)4;
    printf("%f\n", d);

    i = 1.3 + 1.8;
    printf("%d\n", i);

    return 0;

}
