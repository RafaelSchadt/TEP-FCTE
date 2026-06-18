#include <stdio.h>

int main(){
    
    int n, k;
    int menor = 2000000000;
    int temp;
    scanf("%d %d", &n, &k);

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            if(i < k){
                temp = k * (n/i) + i;
                
                if(temp < menor){
                    menor = temp;
                }
            }
        }
    } 

    printf("%d", menor);
    
    return 0;
}