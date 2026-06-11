#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    int temp;
    int menor;
    int anterior;
    int contador;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        int n, d;
        
        contador = 0;
        menor = 101;
        anterior = 101;

        scanf("%d %d", &n, &d);
        for(int j = 0; j < n; j++){
            scanf("%d", &temp);
            if(temp <= menor){
                anterior = menor;
                menor = temp;
            }
            
            else if(temp < anterior){;
                anterior = temp;
            }
            
            if(temp <= d){
                contador++;
            }
        }

        if(anterior + menor <= d || contador == n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }   

    return 0;
}