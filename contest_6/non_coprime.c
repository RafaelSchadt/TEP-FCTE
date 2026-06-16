#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d", &n);
    if(n == 1 || n == 2){
        printf("No");
    }
    else{
        printf("Yes\n");
        printf("1 %d\n", n);
        printf("%d ", n-1);
        for(int i = 1; i < n; i++){
            printf("%d ", i);
        }
    }
    
    return 0;
}