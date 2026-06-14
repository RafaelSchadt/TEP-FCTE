#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        int resposta[3];
        
        scanf("%d %d %d", &resposta[0], &resposta[1], &n);
        resposta[2] = resposta[0] ^ resposta[1];
        printf("%d\n", resposta[n % 3]);
    }
    
    return 0;
}