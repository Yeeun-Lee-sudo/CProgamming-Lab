#include <stdio.h>
#include <stdlib.h>

int getIntelger(){
    int n;
    printf("Input a diget: ");
    scanf("%d",&n);

    return n;
}

int factorial(int a){
    int result = 1;
    for(int i=1; i<=a; i++){
        result *= i;
    }
    return result;
}

int combination(int p, int q){
    return factorial(p) / (factorial(p-q) * factorial(q));
}

int main() {
    int a = getIntelger();
    int b = getIntelger();

    printf("Combination(%d, %d) = %d\n", a, b, combination(a, b));


}
