#include <stdio.h>

int main(){
	int i;
	int vetor[10];
	
	printf("Digite 10 valores...\n");
	
	for(i=0; i<10; i++){
		printf("Digite aqui: ");
		scanf("%d", &vetor[i]);
	}
	printf("\nValores com indice par:\n");
	for(i=0; i<10; i++){
		if(i%2==0){
			printf("Indice: %d   valor: %d\n", i, vetor[i]);
		}
	}
	
	printf("\nFIM PROGRAMA");

}
