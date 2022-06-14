#include <stdio.h>

int main(){
	int i, soma=0, resultado;
	int vetor[10];
	
	printf("Digite 10 valores para calcular sua media...\n\n");
	for(i=0; i<10; i++){
		printf("Digite aqui: ");
		scanf("%d", &vetor[i]);
		soma=soma+vetor[i];
	}
	resultado=soma/10;
	printf("A media dos valores e de %d", resultado);
	
	printf("\n\n\tFim Programa");
}
