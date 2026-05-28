#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(){
    int n, x, y;
    int contador;
    
    scanf("%d %d %d", &n, &x, &y);
    char num[n];
    contador = 0;
    
    for(int i = 0; i < n; i++){
        scanf(" %c", &num[i]);
        if(i > n - (x+1) && num[i] == '1'){
            contador++;
        }
    }

    if(num[n - (y + 1)] == '1'){
        contador--;
    }
    else{
        contador++;
    }

    printf("%d\n", contador);
    return 0;
}

