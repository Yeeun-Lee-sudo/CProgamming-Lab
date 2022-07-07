#include<stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    printf("the size of butterfly: ");
    scanf("%d",&n);
    int l = n * 2 - 1;
    int w = 1;
    int pm = 0;

    for(int i=0; i<l; i++){
        for(int k=1; k<=n; k++){
            if(k<=w){
                printf("%d", k);
            } else{printf(" ");}
        }
        for(int k=n-1; k>0; k--){
            if(k<=w){
                printf("%d", k);
            } else{printf(" ");}
        }
        if(w>=n){
            pm = 1;
        }
        if(pm==0){w++;}
        else{w--;}
        printf("\n");
    }

    return 0;
}

//7장의 7번
