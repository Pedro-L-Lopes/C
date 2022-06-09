#include <stdio.h>

char conceito(float m);

int main(){
	float media;
	char c;

	printf("Media do aluno: ");
	scanf("%f", &media);
	c = conceito(media);
	printf("Conceito: %c", c);
	
	printf("\n\n\t\tPROGRAMA FINALIZADO");
	
	return 0;
}


char conceito(float m){
	if(m>0 && m<=49){
		return 'D';
	}
	else if(m>49 && m<=69){
		return 'C';
	}
	else if(m>69 && m<=89){
		return 'B';
	}
	else if(m>89 && m<=100){
		return 'A';
	}
	else{
		printf("Media invalida, Digite novamente.");
	}
}

