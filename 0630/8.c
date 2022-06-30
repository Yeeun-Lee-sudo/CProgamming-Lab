#include <stdio.h>
#include <stdlib.h>


int main() {

    int hour, min, solving;

    scanf("%d %d", &hour, &min);
    scanf("%d", &solving);

    min += solving;
    hour += min / 60;
    hour = hour % 24;
    min = min % 60;

    printf("%d %02d\n", hour, min);

    return 0;

}
