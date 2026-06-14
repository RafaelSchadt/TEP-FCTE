#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, l, r;
    scanf("%d", &t);

    int menor_final;
    int maior_inicio;
    int resultado;
    
    for(int i = 0; i < t; i++){
        menor_final = 1000000001;
        maior_inicio = 0;
        scanf("%d", &n);
        for(int j = 0; j < n; j++){
            scanf("%d %d", &l, &r);
            if(l > maior_inicio){
                maior_inicio = l;
            }
            if(r < menor_final){
                menor_final = r;
            }
        };
        resultado = maior_inicio - menor_final;
        if(resultado > 0) printf("%d\n", resultado);
        else printf("0\n");

    };

    return 0;
}