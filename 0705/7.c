#include <stdio.h>
#include <stdlib.h>


int main() {

    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b){
        if(b==c){
            res = 10000 + a * 1000;
        }else{
            res = 1000 + a * 100;
        }
    }else{
        if(b==c){
            res = 1000 + a * 100;
        }else{
            if(a==c) res = 1000 + a * 100;
            else{
                if(a>b || b>c){
                    res = a * 100;
                } else if(a>b || c>a){
                    res = c * 100;
                } else res = b * 100;
                }
            }
        }
    printf("%d", res);
}
