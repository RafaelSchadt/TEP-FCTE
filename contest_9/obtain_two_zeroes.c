#include <stdio.h>

int main(){
    
    long long int a, b;
    int t;
    
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%lld %lld", &a, &b);
        if(a >= b){
            if(((2 * a) - b) % 3 == 0 && a <= 2 * b){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            if(((2 * b) - a) % 3 == 0 && b <= 2 * a) printf("YES\n");
            else{
                printf("NO\n");
            }
        }
    }

    return 0;
}