#include <stdio.h>
#include <stdlib.h>

int main() {

    int k, l;
    printf("Input the odd number k: ");
    scanf("%d", &k);
    l = (k - 1)/2;
    int star = k-1;

    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            if(i==l){
                if(j==l){
                    printf("O ");
                } else{
                    printf("+ ");
                }
            } else if(j==l){
                printf("I ");
            } else if(j == star){
                printf("* ");
            } else{
                printf(". ");
            }
        }
        printf("\n");
        star--;
    }

    return 0;

}
//7장의 2번
