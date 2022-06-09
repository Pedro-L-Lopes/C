#include <stdio.h>

int fatorial(int n);
 
int main(){
	int n;

	printf("Digite um numero para calcular seu fatorial: ");
	
	scanf("%d", &n);
	fatorial(n);
	
	printf("\n\n\t\tPROGRAMA FINALIZADO");
}

int fatorial(int n){
	int fat;
	
	if(n<0){
		printf("\n\nNAO EXISTE FATORIAL PARA NUMERO NEGATIVO MEU NOBRE.");
	}else{
		for(fat=1; n>1; n=n-1){
		fat = fat * n;
	}
	
	printf("\nO fatorial e: %d", fat);
	
	return fat;
	}
}






