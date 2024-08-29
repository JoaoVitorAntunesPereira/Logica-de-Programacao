#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//opçoes de limpar memoria
//fflush(stdin);linux
//__fpurge(stdin);linux
//getchar();windows

//funçoes
void inserir(char*);
void imprimir(void);
char* buscar(int);
void pausa(void);
char* buscarNome(char *);
void alterarNome(int);
int i = 0, j, aux;
//variaveis
char pessoas[100][50];

int main(void){
  char nome61[50], nomeBusca[50];
  int opt, id;
  
  do{
    printf("\n[1]-Inserir\n[2]-Imprimir\n[3]-Buscar\n[4]-Buscar por nome\n[5]-Alterar um nome\n");
    fflush(stdin);
    scanf("%d",&opt);
    switch(opt){
      case 0:
    printf("Obrigado e até logo!!");
    pausa();
  break;
      case 1:
    printf("Nome :");
      getchar();
    fgets(nome61, 50, stdin);
    inserir(nome61);
    break;
      case 2:
    imprimir();
    break;
    case 3:
    printf("Informe o código para busca");
    fflush(stdin);
    scanf("%d",&id);
    char *busca = buscar(id);
    printf("Nome encontrado: %s", busca);
    pausa();
  break;
    case 4:
    printf("Informe o nome que deseja buscar: ");
    fflush(stdin);
    fgets(nomeBusca, 50, stdin);

    if(buscarNome(nomeBusca)){
      printf("Achou o nome: %s", nomeBusca);
      printf("ID: %d", j+1);
    }else{
      printf("Não achou o nome: %s", nomeBusca);
    }	
  break;
    case 5:
    printf("Informe o código do nome que deseja alterar");
    scanf("%d",&id);
    id--;
    alterarNome(id);
  break;
      default:
      printf("Opçao invalida, tente novamente");
    break;
    }
  }while(opt!=0);
  
}

void inserir(char *nome){
  strcpy(pessoas[i],nome);
  i++;
}

void imprimir(void){
  for(j=0;j<i;j++){
    printf("%d- %s",(j+1),pessoas[j]);
  }
}

void pausa(void){
    getchar();
}	

char* buscar(int n){
  return pessoas[n];
}	

char* buscarNome(char *nomeBusca){
  char *aux = NULL;
  for(j = 0; j < i; j++){
    if(strcmp(pessoas[j],nomeBusca) == 0){
      aux = pessoas[j];
      break;
    }
  }	

  return aux;
}	 

void alterarNome(int pos){
  char nome[50];
  printf("Informe o nome: ");
  fflush(stdin);
  fgets(nome, 50, stdin);
  strcpy(pessoas[pos], nome);
}