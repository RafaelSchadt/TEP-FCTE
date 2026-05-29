#include <stdio.h>
#include <stdlib.h>

int main(){
    int T, n, m;
    scanf("%d", &T);

    int contadorUm, contadorDois;

    for(int i = 0; i < T; i++){
        scanf("%d", &n);
        contadorUm = 0;
        contadorDois = 0;

        for(int j = 0; j < n; j++){
            scanf("%d", &m);
            if(m == 1){
                contadorUm++;
            }
            else{
                contadorDois++;
            }
        }
        if(contadorUm % 2 == 0){
            if(contadorDois % 2 == 0){
                printf("YES\n");
            }
            else{
                if(contadorUm > 1 && (contadorUm - 2) % 2 == 0) {
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}