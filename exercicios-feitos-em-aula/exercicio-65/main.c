#include <stdio.h>
#include <string.h>
#include "fornecedores.c"
#include <stdbool.h>

int ex65(void){
    char nome[10];
    char endereco[30];

    printf("Nome do fornecedor: ");
    scanf("%s", nome);
    __fpurge(stdin);
    printf("Nome do endereco: ");
    scanf("%s", endereco);

    inserir(nome, endereco);
    imprimir();
    return 0;
}

void defin65(){
  printf("Exercício 65:\n");
  printf("Tipo Abstrato de Dado, com funções.\n");
  printf("====================================================\n");
}