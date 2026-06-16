#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int contarDistintos(int vetor[], int tamanho) {
    if (tamanho == 0) return 0;

    qsort(vetor, tamanho, sizeof(int), comparar);

    int contador = 1;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] != vetor[i - 1]) {
            contador++;
        }
    }

    return contador;
}

int main(){
    
    int n;
    scanf("%d", &n);
    int vetor[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    int distintos = contarDistintos(vetor, n);
    int auxiliar = vetor[0] + vetor[n-1];
    int incorreto = 0;
    if(distintos == 1){
        printf("0");
    }

    else if(distintos == 2){
        if(auxiliar % 2 == 0){
            printf("%d", auxiliar/2 - vetor[0]);
        }
        else{
            printf("%d", vetor[n-1] - vetor[0]);
        }
    }
    
    else if (distintos == 3){
        if(auxiliar % 2 != 0) printf("-1");
        else{
            for(int j = 0; j < n; j++){
                if(vetor[j] != vetor[0] && vetor[j] != auxiliar/2 && vetor[j] != vetor[n-1]){
                    printf("-1");
                    incorreto = 1;
                    break;
                }
            }
            if(incorreto == 0){
                printf("%d", auxiliar/2 - vetor[0]);
            }
        }
    }
    else{
        printf("-1");
    }
    return 0;
}