#include <stdio.h>

int main(){
	int i;
	float vetor[5];
	
	printf("Digite 5 valores...\n");
	for(i=0; i<5; i++){
	printf("Digite: ");
	scanf("%f", &vetor[i]);
	}
	menorValor(5, vetor);
	
	printf("\n\tFim Programa");
}

void menorValor(int n, float v[]){
	int indice, i;
	float mvalor=v[0];
	
	for(i=0; i<n; i++){
		if(v[i]<mvalor){
		mvalor=v[i];
		indice=i;
		}
	}
	
	printf("O menor valor esta no indice: %d e eh %.2f", indice, mvalor);
	
	
}




