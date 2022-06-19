#include <stdio.h>

int somaIntervalo(int n1, int n2){
	int maior, menor, i, soma = 0;
	
	if(n1 > n2){
		maior = n1;
		menor = n2;
	}
	else{
		maior = n2;
		menor = n1;
	}
	
	for(i=menor; i<=maior; i++){
		soma = soma + i;
	}
	
	return soma;
}

int main(){
	int s = somaIntervalo(6, 3);
	printf("%d", s);
}

















