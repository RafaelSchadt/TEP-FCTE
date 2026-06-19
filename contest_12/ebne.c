#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    int n;
    int contadorImpar = 0;
    int primeiroImpar = -1;
    int segundoImpar = -1;

    while (t--) {
        scanf("%d", &n);
        char numero[n];
        contadorImpar = 0;
        primeiroImpar = -1;
        
        for(int i = 0; i < n; i++){
            scanf(" %c", &numero[i]);
            if(numero[i] == '1' || numero[i] == '3' || numero[i] == '5' || numero[i] == '7' || numero[i] == '9'){
                if(primeiroImpar == -1){
                    primeiroImpar = i;
                }
                else{
                    segundoImpar = i;
                    contadorImpar = 2;
                }
            }
        }
        if(contadorImpar == 2){
            printf("%c%c\n", numero[primeiroImpar], numero[segundoImpar]);
        }
        else{
            printf("-1\n");
        }
    }
        return 0;
}