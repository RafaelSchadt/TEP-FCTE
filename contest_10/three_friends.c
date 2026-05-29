#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int calcularResultado(int a, int b, int c){
    return abs(a - b) + abs(b - c) + abs(a - c);
}


int main(){
    int T;
    int vetor[3];
    int resultado;

    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d %d", &vetor[0], &vetor[1], &vetor[2]);
        bubbleSort(vetor, 3);
        if(vetor[0] == vetor[1]){
            if(vetor[1] == vetor[2]){
                resultado = calcularResultado(vetor[0], vetor[1], vetor[2]);
            }
            else{
                if(vetor[2] - vetor[1] == 1){
                    resultado = calcularResultado(vetor[0], vetor[1], vetor[2] - 1);
                }
                else{
                    resultado = calcularResultado(vetor[0] + 1, vetor[1] + 1, vetor[2] - 1);
                }
            }
        }
        else{
            if(vetor[1] == vetor[2]){
                if(vetor[1] - vetor[0] == 1){
                    resultado = calcularResultado(vetor[0] + 1, vetor[1], vetor[2]);
                }
                else{
                    resultado = calcularResultado(vetor[0] + 1, vetor[1] - 1, vetor[2] - 1);
                }
            }
            else{
                resultado = calcularResultado(vetor[0] + 1, vetor[1], vetor[2] - 1);
            }
        }
        printf("%d\n", resultado);
    }

    return 0;
}