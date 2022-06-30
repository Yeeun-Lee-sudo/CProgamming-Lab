#include <stdio.h>
#include <stdlib.h>


int main() {

    int input, sum;
    scanf("%d",&input);

    sum = 0;

    sum += input % 10;
    input = input / 10;
    sum += input % 10;
    input = input / 10;
    sum += input % 10;
    input = input / 10;
    sum += input % 10;
    input = input / 10;

    printf("%d", sum);
    return 0;

}
