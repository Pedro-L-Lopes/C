#include <stdio.h>

char conceito(int n){
    char c;
    
    if(n <= 49){
        c = 'D';
    }
    else if(n >= 50 && n <= 69){
        c = 'C';
    }
    else if(n >= 70 && n <= 89){
        c = 'B';
    }
    else{
        c = 'A';
    }

    return c;
}

int main(){
    char n = conceito(77);
    printf("%c", n);
}




