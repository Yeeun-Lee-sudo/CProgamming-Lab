#include <stdio.h>
#include <stdlib.h>


int main() {

    int input, sum;
    scanf("%d",&input);
    sum = 0;
    int a = 1;
    while(a){
        sum += input % 10;
        input = input / 10;
        if(input == 0){
            a = 0;
        }
    }
    printf("%d", sum);
    return 0;

}
