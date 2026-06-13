#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        if(n <= 3){
            if(n == 1){
                printf("0\n");
            }
            else if (n == 2)
            {
                printf("1\n");
            }
            else{
                printf("2\n");
            }
        }
        else{
            if(n % 2 == 0){
                printf("2\n");
            }
            else{
                printf("3\n");
            }
        }
    }
    
    return 0;
}