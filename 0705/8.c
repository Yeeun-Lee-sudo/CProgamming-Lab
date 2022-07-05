#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int com, user;

    srand(time(NULL)); // 1-가위 2-바위 3-보
    com = rand() % 3 + 1;
    scanf("%d", &user);

    printf("%d\n", com);

    switch(com - user){
        case 0:
            printf("DRAW");
            break;
        case 1:
            printf("Computer win!");
            break;
        case 2:
            printf("User win!");
            break;
        case -1:
            printf("User win!");
            break;
        case -2:
            printf("Computer Win!");
            break;
    }

    return 0;

}
