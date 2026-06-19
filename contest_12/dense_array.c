#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int vetor[n];
        
        for (int j = 0; j < n; j++) {
            scanf("%d", &vetor[j]);
        }

        int contador = 0;

        for (int j = 1; j < n; j++) {
            int min = (vetor[j] < vetor[j-1]) ? vetor[j] : vetor[j-1];
            int max = (vetor[j] > vetor[j-1]) ? vetor[j] : vetor[j-1];
            
            while (min * 2 < max) {
                contador++;
                min *= 2; 
            }
        }
        
        printf("%d\n", contador);
    }

    return 0;
}