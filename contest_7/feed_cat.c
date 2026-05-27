#include <stdio.h>
#include <stdlib.h>

int calculaMinutos(int h, int m){
    return h * 60 + m;
}

int calculaHoras(int h0, int m0, int h1, int m1){
    int H0 = calculaMinutos(h0, m0);
    int H1 = calculaMinutos(h1, m1);
    return H0 - H1;
}

int quantidadeSuficiente(int m, int n){
    if(m % n == 0){
        return m / n;
    }
    else{
        return (m / n + 1);
    }
}

int main(){
    
    int h, m;
    int H, D, C, N;
    float valor, desconto;
    
    scanf("%d %d", &h, &m);
    scanf("%d %d %d %d", &H, &D, &C, &N);
    desconto = 0.8 * C;
    
    if(h >= 20 && h <= 23){
        valor = quantidadeSuficiente(H, N) * desconto;
    }
    
    else{
        int temp = D * calculaHoras(20, 00, h, m);
        if(5 * quantidadeSuficiente(H, N) > 4 * quantidadeSuficiente(H + temp, N)){
            valor = quantidadeSuficiente(H + temp, N) * desconto;
        }
        else{
            valor = quantidadeSuficiente(H, N) * C * 1.0;
        }
    }
    
    printf("%.4f", valor);
    return 0;
}