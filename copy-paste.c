#include <stdlib.h>
#include <stdio.h>

int main(){
    int T, menor, k, n, contador;

    scanf("%d", &T);
    
    for(int i = 0; i < T; i++){
        
        scanf("%d %d", &n, &k);
        menor = 10001;
        contador = 0;
        int vetor[n];

        for(int j = 0; j < n; j++){
            scanf(" %d", &vetor[j]);
            if(vetor[j] < menor){
                menor = vetor[j];
            }
        }

        for(int j = 0; j < n; j++){
            contador += (k - vetor[j]) / menor;
        }
        printf("%d\n", contador - (k/menor - 1));
    }

    return 0;
}