#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    if(m == 0){
        printf("1");
    }
    
    else{
        if(m > n/2){
            printf("%d", n - m);
        }
        else{
            printf("%d", m);
        }
    }

    return 0;
}