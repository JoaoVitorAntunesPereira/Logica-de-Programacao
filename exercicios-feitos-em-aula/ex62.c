#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[10];
  int idade;
}Pessoa;

int main(void){
  Pessoa p, p1;

  printf("Informe o nome: ");
  scanf("%s", &p.nome);
  printf("Informe a idade: ");
  scanf("%d", &p.idade);

  printf("Informe o nome: ");
  scanf("%s", &p1.nome);
  printf("Informe a idade: ");
  scanf("%d", &p1.idade);

  printf("\nPessoa p:\nNome: %s\nIdade: %d", p.nome, p.idade);
  printf("\nPessoa p1:\nNome: %s\nIdade: %d", p1.nome, p1.idade);
  return 0;
}