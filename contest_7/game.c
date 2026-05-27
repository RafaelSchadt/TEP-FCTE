#include <stdio.h>
#include <stdlib.h>

int main(){
    
    long long int n;
    scanf("%lld", &n);
    
    int result;

    result = n & 1;

    if(result){
        printf("1");
    }
    else{
        printf("2");
    }

    return 0;
}