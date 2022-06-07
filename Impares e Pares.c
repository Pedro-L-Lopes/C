#include <stdio.h>

int main(){
	int n;
	
	n=1;
	
	while(n <= 100){
		if(n%2==0){
		printf("\n\t\tOs numeros Pares sao: %d", n);
	}else{
		printf("\t\tOs numeros impares sao: %d\n", n);
	}
	n++;
	}
}
