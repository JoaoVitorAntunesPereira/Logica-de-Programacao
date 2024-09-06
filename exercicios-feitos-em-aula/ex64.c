#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[10];
    int  idade;
}Pessoa;

void escrever(char*, int, int);
void ler(void);

Pessoa vet[3];

int main(void){
    char nome[10]; //==char *nome
    int  idade, i;


    for(i = 0; i < 3; i++){
        fflush(stdin);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Idade: ");
        scanf("%d", &idade);
        escrever(nome, idade, i);
    }

    ler();
    return 0;
}

void escrever(char *nome, int idade, int i){
    Pessoa p;
    strcpy(p.nome,nome);
    p.idade = idade;
    vet[i] = p;
}

void ler(void){
    for(int i = 0; i < 3; i++){
        printf("\n=================");
        printf("\nNome: %s", vet[i].nome);
        printf("\nIdade: %d", vet[i].idade);
    }
}