#include<stdio.h>

int main(void){

    double a, b, c, dis;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a==0){
        printf("result is %.2f\n", -(c/b));
    } else{
        dis = b * b - (4.0 * a * c);
        if(dis>=0){
            printf("%.2f\n", (-b + sqrt(dis)) / (2.0*a));
            printf("%.2f\n", (-b - sqrt(dis)) / (2.0*a));
        } else{
            printf("No exist\n");
        }
    }
    return 0;
}
