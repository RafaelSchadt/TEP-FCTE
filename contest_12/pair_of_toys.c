#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int n, k, resultado;
    scanf("%lld %lld", &n, &k);

    if(k > (2 * n) - 1){
        printf("0");
    }

    else{
        if(k > n){
            resultado = ((2 * n) - k + 1)/2;
        }
        else{
            resultado = (k - 1)/2;

        }
        printf("%lld", resultado);
    }

    return 0;
}