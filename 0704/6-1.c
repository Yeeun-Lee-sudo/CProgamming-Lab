#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    printf("The number of cut: ");
    scanf("%d", &n);

    int c = n / 2;
    int r = n - c;

    printf("%d", (c+1)*(r+1));

    return 0;

}
