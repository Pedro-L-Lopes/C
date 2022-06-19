#include <stdio.h>

int fatorial(int n){
    int f = 1, i;
    
    for(i=1; i <= n; i++){
        f = f * i;
    }
    
    return f;
}

int main(){
    int fat = fatorial(2);
    printf("%d", fat);
}




