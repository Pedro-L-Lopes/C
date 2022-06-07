#include <stdio.h>

int main(){
	int n, cont;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	cont=1;
	
	while(cont <= n){
		if(n%2==0){
		printf("\n\t\tOs numeros Pares sao: %d", n);
	}else{
		printf("\t\tOs numeros impares sao: %d\n", n);
	}
	n--;
	}
}
