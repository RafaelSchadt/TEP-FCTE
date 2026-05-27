#include <stdio.h>
#include <stdlib.h>

int tempDist(int pos, int k, int n){
    if(pos > k){
        return (n - pos) + k;
    }
    else{
        return k - pos;
    }
}

int main(){
    int n;
    long long int menor = 2e9;
    int pos = -1;
    int dist;
    int temp;

    scanf("%d", &n);

    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf(" %d", &vetor[i]);
        
        temp = vetor[i] + tempDist(vetor[i] % n, i, n);

        if(temp < menor){
            menor = temp;
            pos = i;
        }
    }
    
    printf("%d", pos + 1);
    return 0;
}