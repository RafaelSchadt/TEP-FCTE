#include <stdio.h>
#include <stdlib.h>

int main(){

    long long int n;
    scanf("%lld", &n);

    if((n + 1) % 2 == 0){
        printf("%lld", (n + 1)/2);
    } 
    
    else if (n == 0){
        printf("0");
    }

    else{
        printf("%lld", (n + 1));
    }
    return 0;
}