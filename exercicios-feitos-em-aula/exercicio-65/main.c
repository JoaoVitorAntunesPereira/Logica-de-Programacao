#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#include "fornecedores.c"
#include "produtos.c"

void pausa(void);

int main(void){
    int opt;
    do{
        printf("Informe a opção desejada\n");
        printf("[0] - Sair\n");
        printf("[1] - Registrar Fornecedor\n");
        printf("[2] - Registrar Produto\n");
        printf("[3] - Imprimir Fornecedores\n");
        printf("[4] - Imprimir Produtos\n");
        scanf("%d",&opt);
        switch(opt){
        case 0:
            printf("Até logo\n");
            pausa();
            break;
        case 1:
            inserirFornecedor();
            break;
        case 2:
            inserirProduto();
            break;
        case 3:
            imprimirFornecedor();
            pausa();
            break;
        case 4:
            imprimirProduto();
            pausa();
            break;

        }
        system("cls");
    }while(opt!=0);
    return 0;
}

void pausa(void){
    fflush(stdin);
    getchar();
}
