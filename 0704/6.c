#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int result = 2;
    int plus = 2;
    int q = 0;

    printf("The number of cut: ");
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        result += plus;
        q++;
        if(q==2){
            q = q % 2;
            plus++;
        }
    }

    printf("%d", result);

    return 0;

}
