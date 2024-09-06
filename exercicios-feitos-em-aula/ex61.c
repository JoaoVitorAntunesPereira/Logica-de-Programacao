#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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
bool excluir(int);
int verificarCodigo(int);

int i = 0, j, aux, id;
//variaveis
char pessoas[100][50];

int main(void){
  char nome61[50], nomeBusca[50];
  int opt;
  char *busca;
  
  do{

    printf("\n[1]-Inserir\n[2]-Imprimir\n[3]-Buscar\n[4]-Buscar por nome\n[5]-Alterar um nome\n[6]-Excluir um nome\n");
    fflush(stdin);
    scanf("%d",&opt);
    switch(opt){
      case 0:
    printf("Obrigado e ate logo!!");
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
      pausa();
  break;
    case 3:
    printf("Informe o codigo para busca: ");
    fflush(stdin);
    scanf("%d",&id);
    busca = buscar(verificarCodigo(id));
    printf("Nome encontrado: %s", busca);
    printf("%d", id);
    pausa();
  break;
    case 4:
    printf("Informe o nome que deseja buscar: ");
    fflush(stdin);
    fgets(nomeBusca, 50, stdin);

    if(buscarNome(nomeBusca)){
      printf("Achou o nome: %s", nomeBusca);
      printf("ID: %d", j);
    }else{
      printf("Nao achou o nome: %s", nomeBusca);
    }	
    pausa();
  break;
    case 5:
    printf("Informe o codigo do nome que deseja alterar");
    scanf("%d",&id);
    if(strcmp(buscar(id),"") != 0){
      alterarNome(id);
    }else{
      printf("Falha ao buscar. Nome nao encontrado");
    }
  break;
    case 6:
    printf("Informe o codigo: ");
    scanf("%d", &id);
    
    if (excluir(verificarCodigo(id))){
      printf("Exclusao realizada.");
    }else{
      printf("Exclusao nao pode ser realizada");
    }
    pausa();
  break;
      default:
      printf("Opcao invalida, tente novamente");
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
    printf("%d- %s",(j),pessoas[j]);
  }
  getchar();
}

void pausa(void){
    fflush(stdin);
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

bool excluir(int id){
  int j;
  for(j = id; j < i; j++){
    strcpy(pessoas[id], pessoas[id+1]);
    id++;
  }
  i--;
  return true;
}


int verificarCodigo(int id){
  bool sair = false;

  do{
    if(id > (i - 1)){
      printf("Codigo inexistente\nPor favor informe um codigo valido");
      //__fpurge(stdin);
      fflush(stdin);
      scanf("%d", &id);
    }else{
      sair = true;
    }
  }while(!sair);

  return id;
}