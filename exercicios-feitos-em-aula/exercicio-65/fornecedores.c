#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char nome[10];
    char endereco[30];
}Fornecedor;

Fornecedor vetor[3];
int c = 0;

bool inserir(char *nome, char *endereco){
    Fornecedor f;
    int t = sizeof(vetor) / sizeof(Fornecedor);//calcula tamanho do vetor
    __fpurge(stdin);
    strcpy(f.nome, nome);
    strcpy(f.endereco, endereco);
    printf("\nExistem %d fornecedores registrados", t);
    vetor[c] = f;
    c++;
}

void imprimir(void){
    for(int i = 0; i < c; i++){
    printf("\nNome: %s\nEndereco: %s", vetor[i].nome, vetor[i].endereco);

    }

}

bool excluir(int id){


}
