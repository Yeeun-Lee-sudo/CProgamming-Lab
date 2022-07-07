#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("input the number: ");
    scanf("%d", &n);
    int num = 0, sum = 0;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i <= j){
                num++;
                sum += i;
                sum += j;
                //printf("(%d, %d)\n", i, j);  //확인용 행
            }
        }
    }

    printf("%d\n%d\n", num, sum);

    return 0;
}

//7장의 6번
