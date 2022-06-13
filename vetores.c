#include <stdio.h>

int main(){
	int i, tamanho=5;
	float notas[tamanho];
	
	for(i=0; i<tamanho; i++){
		printf("Digite o valor da posicao notas[%d]:\n", i);
		scanf("%f", &notas[i]);
	}
	
	printf("Valores lidos:\n");
	for(i=0; i<tamanho; i++){
		printf("notas[%d]=%.2f\n", i, notas[i]);
	}
}

