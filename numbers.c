#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    return mdc (b, a % b);
}


int main(){
    int A, dividendo;
    int soma = 0;
    int quantidade = 0;
    scanf("%d", &A);

    for(int i = 2; i < A; i++){
        dividendo = A;
        while(dividendo/i != 0){
            soma += dividendo % i;
            dividendo = dividendo/i;
        }
        soma += dividendo % i;
        quantidade++;
    }   

    printf("%d/%d", soma/mdc(soma, quantidade), quantidade/mdc(soma, quantidade));

    return 0;
}