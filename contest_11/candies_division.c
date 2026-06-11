#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        long long int n, k;
        long long int resto;
        scanf("%lld %lld", &n, &k);
        
        resto = n % k;

        if(resto > k / 2){
            printf("%lld\n", n - (resto - k/2));
        }
        else{
            printf("%lld\n", n);
        }
    }

    return 0;
}