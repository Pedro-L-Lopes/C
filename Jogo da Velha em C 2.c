#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void imprime(int n, int *Tabuleiro);
void criarTabuleiro(int n, int *Tabuleiro);
void nomearJogador(char *jogador1,char *jogador2);
int escolhaJogador();
void jogada(int n,int *Tabuleiro, int x);
int verificacao(int n, int *Tabuleiro);

const char *jogador1[10], *jogador2[10];

int main(){

	int Tabuleiro[9];
	int i,x,jogadas=0;
	int jogador,flag=0;
	int vencer=0;
	criarTabuleiro(9, Tabuleiro);

	nomearJogador(jogador1,jogador2);
	jogador=escolhaJogador();
	if(jogador == 1){
		printf("%s ",jogador1);
		x=2;
		jogada(9, Tabuleiro, x);
		flag=2;
		imprime(9, Tabuleiro);
	}
	else{
		printf("%s ",jogador2);
		x=3;
		jogada(9, Tabuleiro, x);
		flag=1;
		imprime(9, Tabuleiro);
	}

	do{
		if(flag == 1){
		printf("%s ",jogador1);
		x=2;
		jogada(9, Tabuleiro, x);
		flag=2;
		++jogadas;
		imprime(9, Tabuleiro);
		vencer = verificacao(9, Tabuleiro);
		if(vencer==1){
			printf("\nParabens %s voce venceu!", jogador1);
			break;
		}
		}
		else if(flag == 2){
		printf("%s ",jogador2);
		x=3;
		jogada(9, Tabuleiro, x);
		flag=1;
		++jogadas;
		imprime(9, Tabuleiro);
		vencer = verificacao(9, Tabuleiro);
		if(vencer==1){
			printf("\nParabens %s voce venceu!", jogador2);
			break;
		}
		}
		else{

			printf("opcao invalida");
		}
		printf("\n\n");

	}while(jogadas<9);


	return 0;
}
int verificacao(int n, int *Tabuleiro){

	if(Tabuleiro[0]==2 && Tabuleiro[4]==2 && Tabuleiro[8]==2){
		return 1;
	}
	else if(Tabuleiro[0]==3 && Tabuleiro[4]==3 && Tabuleiro[8]==3){
		return 1;
	}

	else if(Tabuleiro[0]==2 && Tabuleiro[1]==2 && Tabuleiro[2]==2){
		return 1;
	}
	else if(Tabuleiro[0]==3 && Tabuleiro[1]==3 && Tabuleiro[2]==3){
		return 1;
	}

	else if(Tabuleiro[3]==2 && Tabuleiro[4]==2 && Tabuleiro[5]==2){
		return 1;
	}
	else if(Tabuleiro[3]==3 && Tabuleiro[4]==3 && Tabuleiro[5]==3){
		return 1;
	}

	else if(Tabuleiro[6]==2 && Tabuleiro[7]==2 && Tabuleiro[8]==2){
		return 1;
	}
	else if(Tabuleiro[6]==3 && Tabuleiro[7]==3 && Tabuleiro[8]==3){
		return 1;
	}

	else if(Tabuleiro[2]==2 && Tabuleiro[4]==2 && Tabuleiro[6]==2){
		return 1;
	}
	else if(Tabuleiro[2]==3 && Tabuleiro[4]==3 && Tabuleiro[6]==3){
		return 1;
	}

	else if(Tabuleiro[0]==2 && Tabuleiro[3]==2 && Tabuleiro[6]==2){
		return 1;
	}
	else if(Tabuleiro[0]==3 && Tabuleiro[3]==3 && Tabuleiro[6]==3){
		return 1;
	}

	else if(Tabuleiro[1]==2 && Tabuleiro[4]==2 && Tabuleiro[7]==2){
		return 1;
	}
	else if(Tabuleiro[1]==3 && Tabuleiro[4]==3 && Tabuleiro[7]==3){
		return 1;
	}

	else if(Tabuleiro[2]==2 && Tabuleiro[5]==2 && Tabuleiro[8]==2){
		return 1;
	}
	else if(Tabuleiro[2]==3 && Tabuleiro[5]==3 && Tabuleiro[8]==3){
		return 1;
	}
	else{
			return 0;
	}


}
void jogada(int n,int *Tabuleiro, int x){
	int movimento;
    int flag;

    printf("informe a casa da jogada: ");
	scanf("%d", &movimento);

	do{
    if(Tabuleiro[movimento-1] == 2 || Tabuleiro[movimento-1]==3){
        printf("Casa ocupada, tente novamente\n");
        flag=0;
        jogada(9, Tabuleiro,x);
        }
	else{
        Tabuleiro[movimento-1] = x;
        flag=1;
	}
	}while(flag=0);
}
int escolhaJogador(){
	int n;
	printf("\n Qual o numero do jogador que vai comecar a jogar(1/2): ");
	scanf("%d", &n);
	if(n==1 || n==2){
		return n;
	}
	else{
		escolhaJogador();
	}
}

void nomearJogador(char *jogador1,char *jogador2){
	printf("Informe o nome do jogador 1(X): ");
	fgets(jogador1,10,stdin);
	printf("Informe o nome do jogador 2(O): ");
	fgets(jogador2,10,stdin);
}

void criarTabuleiro(int n, int *Tabuleiro){
	int i;

	for(i=0;i<9;i++){
		Tabuleiro[i] = 0;
	}
}

void imprime(int n, int *Tabuleiro){

	 int i;
        system("cls");
		for(i=0;i<9;++i){
		if(Tabuleiro[i] == 2 ){
			if(i!=2 || i!=5 || i!= 8){
				printf("X");
			}
			else{
				printf("X");
			}
		}
		else if(Tabuleiro[i] == 3){
			if(i!=2 || i!=5 || i!= 8){
				printf("O");
			}
			else{
				printf("O");
			}
		}
		else{
            printf("_");
		}
		if(i==2){
			printf("\n");
		}
		if(i==5){
			printf("\n");
		}
	}
	printf("\n");
}

