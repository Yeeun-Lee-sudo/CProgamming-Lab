#include <stdio.h>
#include <stdlib.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

int main() {
    char c;

    while(TRUE){
        printf("input the lower-case character: ");
        scanf("%c", &c);

        if(c=='Q'){
            break;
        }
        if(c<'a' || c>'z'){
            continue;
        }
        c -= 32;
        printf("Converted upper-case character is %c\n", c);
    }
    return 0;
}
