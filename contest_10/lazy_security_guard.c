#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int resultado;
    scanf("%d", &n);

    resultado = sqrt(n);
    if(resultado * resultado == n){
        printf("%d", resultado * 4);
    }

    else{
        if(n - resultado * resultado > resultado){
            printf("%d", (resultado * 4) + 4);
        }
       else{
            printf("%d", (resultado * 4) + 2); 
       }
    }
    return 0;
}