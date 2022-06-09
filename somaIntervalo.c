#include <stdio.h>

int somaIntervalo(int n1, int n2);

int main(){
	int n1, n2, soma;
	
	printf("Somar intervalo entre dois numeros...\n\n");
	printf("Numero 1: ");
	scanf("%d", &n1);
	printf("Numero 2: ");
	scanf("%d", &n2);
	soma=somaIntervalo(n1, n2);
	if(n1>n2){
		printf("A soma do intervalo entre %d e %d e: %d", n2, n1, soma);
	}
	else{
		printf("A soma do intervalo entre %d e %d e: %d", n1, n2, soma);
	}
	
	printf("\n\n\t\tPROGRAMA FINALIZADO");
}


int somaIntervalo(int n1, int n2){
	int soma=0, n, i;
	
	if(n1>n2){
		n=n2;
		n2=n1;
		n2=n;
	}
	i=n1;
	
	while(i<=n2){
		soma=soma+i;
		i++;
	}
	return soma;
	
}






