#include <stdio.h>
#include <stdlib.h>


int main() {

    double x, fx;
    scanf("%lf", &x);

    if(x<=0){
        fx = x*x - 9*x + 2;
    } else{
        fx = 7*x + 2;
    }

    printf("%.2f\n", fx);

    return 0;

}
