#include <stdio.h>

int parImpar(int n, int cont);

int main(){
	int a, b;
	printf("Numero que começa: ");
	scanf("%d", &b);
	printf("Numero que termina: ");
	scanf("%d", &a);
	parImpar(a, b);

}

int parImpar(int n, int cont){
	
	while(cont <= n){
		if(n%2==0){
		printf("\n\t\tOs numeros Pares sao: %d", n);
	}else{
		printf("\t\tOs numeros impares sao: %d\n", n);
	}
	n--;
	}
	
	return n;
}


