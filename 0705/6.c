#include <stdio.h>
#include <stdlib.h>

int main() {

    int k, m, n;
    scanf("%d %d %d", &k, &m, &n);

    if(k*m-n>0){
        printf("%d", k*m-n);
    } else printf("0");

    return 0;

}

//3번
