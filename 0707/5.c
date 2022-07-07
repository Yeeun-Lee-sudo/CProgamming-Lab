#include <stdio.h>
#include <stdlib.h>

int input(){
    int a;
    printf("input a diget: ");
    scanf("%d", &a);

    return a;
}

int getmax(int a, int b){
    if(a>=b){
        return a;
    } else {
        return b;
    }
}

int main() {

    int a = input();
    int b = input();

    int max = getmax(a, b);

    printf("the max value is %d", max);

    return 0;

}
