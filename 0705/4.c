#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d", &num);

    switch(num){
        case 0:
            printf("null\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("more than three\n");
            break;
    }

    return 0;

}
