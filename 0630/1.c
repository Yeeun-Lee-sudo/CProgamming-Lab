#include <stdio.h>
#include <stdlib.h>

int main() {

    char c = 'A';
    int i = 66;

    printf("%d : %d\n", c, i);
    printf("%c : %c\n", c, i);

    printf("%d\n", 3 + ('4' - 48)); // 문자 형태의 숫자를 원래 숫자로 만들고 싶을 때, 아스키 코드의 경우 48을 뺀다.
    //대문자는 65, 소문자는 97

    return 0;

}
