#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//opçoes de limpar memoria
//fflush(stdin);
//getchar();

//funçoes
void inserir(char*);
void imprimir(void);
//variaveis
char pessoas[100][50];
int i=0;
int main (void){
	char nome[50];
	int opt;
	do{
		system("clear");
		printf("[1]-Inserir\n[2]-Imprimir\n");
		scanf("%d",&opt);
		switch(opt){
			case 0:
			printf("Obrigado e até logo!!");
			getchar();
			case 1:
			printf("Nome :");
			getchar();
			gets(nome);
			inserir(nome);
		break;
			case 2:
			imprimir();
			
		break;
			default:
			printf("Opçao invalida, tente novamente");
			getchar();
		break;
	}
	}while(opt!=0);
	
}

void inserir(char *nome){
	strcpy(pessoas[i],nome);
	i++;
}
void imprimir(void){
	int j;
	for(j=0;j<i;j++){
		printf("%d - %s\n",(j+1),pessoas[j]);
	}
	getchar();
}