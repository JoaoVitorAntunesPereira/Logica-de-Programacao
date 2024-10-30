
#include <stdio.h>
#include <string.h>
#define MaxItens 10
#define TamItem 20

typedef char LISTA[MaxItens][TamItem];
LISTA L1;

void opcoes(void);
void criarLista(LISTA);
void imprimirLista(LISTA);
int contarElementosLista(LISTA);
void inserirElementoLista(LISTA, char *);
void excluirItemLista(LISTA, char *);

int main(void){

  opcoes();
}

void opcoes(){
  int opt;
  char *elemento;
  printf("Informe a opção que deseja: \n");
  printf("1. Inserir elemento\n");
  printf("2. Retirar elemento\n");
  printf("3. Criar lista\n");
  printf("4. Contar elementos da lista\n");
  printf("5. Exibir o conteúdo da lista\n");
  printf("6. Sair\n");
  scanf("%i", &opt);

  switch(opt){
    case 1:
      printf("Informe o elemento que deseja inserir\n");
      fgets(elemento, sizeof(elemento), stdin);
      elemento[strcspn(elemento, "\n")] = '\0';
      inserirElementoLista(L1, elemento);
      opcoes();
      break;
    case 2:
      opcoes();
      break;
    case 3:
      opcoes();
      break;
    case 4:
      opcoes();
      break;
    case 5:
      opcoes();
      break;
    case 6:
      break;
    default:
      printf("Informe uma opcao valida!\n");
      opcoes();
  }
}

void criarLista(LISTA l){
  int i;
  
  for (i = 0; i < MaxItens; i++){
    l[i][0] = '\0';
  }
}

void imprimirLista(LISTA l){
  int i;
  
  printf("Itens da lista\n");
  for(i = 0; i < MaxItens && strlen(l[i]) > 0; i++){
    printf("%s",l[i]);
  }
}

int contarElementosLista(LISTA l){
  int i;
  
  for (i = 0; i < MaxItens && strlen(l[i]) > 0; i++);
  
  return(i);
}

void inserirElementoLista(LISTA l, char *item){
  int i;
  
  for(i = 0; i < MaxItens && strlen(l[i]) > 0; i++);
  
  if (i < MaxItens){
    strcpy(l[i], item);
    printf("Item (%s) inserido com sucesso\n",item);
  }else{
    printf("Lista cheia, não pode inserir\n");
  }
}

void excluirItemLista(LISTA l, char *item){
  int i;
  for(i = 0; i < MaxItens && strlen(l[i]) > 0 && (strcmp(l[i], item) != 0); i++);
  
  if (i < MaxItens && (strcmp(l[i], item) == 0)){
    printf("Item (%s) encontrado, removendo\n",item);
    if (i < (MaxItens-1)){
      for (;i < (MaxItens-1) && strlen(l[i]) > 0;i++){
        strcpy(l[i], l[i+1]);
      }
    }
    l[MaxItens-1][0] = '\0';
  }else{
    printf("Item (%s) não encontrado\n",item);
  }
  
}

