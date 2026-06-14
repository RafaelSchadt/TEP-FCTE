#include <stdio.h>

int troca(int k, int pos){
    
    int shells[3] = {0, 0, 0};
    shells[pos] = 1;
    int temp;
    
    for(int i = 1; i <= k; i++){
        if(i % 2 == 0){
            temp = shells[2];
            shells[2] = shells[1];
            shells[1] = temp;
        }
        else{
            temp = shells[0];
            shells[0] = shells[1];
            shells[1] = temp;
        }
    }
    
    for(int j = 0; j < 3; j++){
        if(shells[j] == 1){
            return j;
        }
    }
};

int main()
{
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);
    
    int i = 0;
    
    while(1){
        if(troca(n % 6, i) == x) break;
        i++;
    }
    
    printf("%d", i);
    
    return 0;
}