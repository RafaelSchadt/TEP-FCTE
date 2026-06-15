#include <stdio.h>

int main(){

    int t;
    long long int n, k;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++){
        scanf("%lld %lld", &n, &k);
        if((n-k) % 2 == 0 && n >= k*k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}