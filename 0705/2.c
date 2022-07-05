#include <stdio.h>
#include <stdlib.h>

int main() {

    char c;
    int x, y, result;
    scanf("%d %c %d", &x, &c, &y);

    if(c == '+'){
        result = x + y;
    } else if(c == '-'){
        result = x - y;
    } else if(c == '*'){
        result = x * y;
    } else if(c == '/'){
        result = x / y;
    } else if(c == '%'){
        result = x % y;
    } else {
        printf("not supporting");
        return 0;
    } printf("%d", result);

    return 0;
}

//switch 구문으로도 바꿔봈으나 귀찮아서 안함
