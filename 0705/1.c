#include <stdio.h>
#include <stdlib.h>

int main() {

    char c;
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z'){
        printf("%c is upper case\n", c);
    } else if(c >= 'a' && c <= 'z'){
        printf("%c is lower case\n", c);
    } else if(c >= '0' && c <= '9'){
        printf("%c is number\n", c);
    } else {
        printf("%c is extra cases\n", c);
    }

    return 0;

}
