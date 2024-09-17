#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<stdbool.h>
#include "fornecedores.c"
#include "produtos.c"
void pausa(void);

int main(void){
    int opt;
            int id;
    do{
        printf("Informe a opção desejada\n");
        printf("[0] - Sair\n");
        printf("[1] - Registrar Fornecedor\n");
        printf("[2] - Registrar Produto\n");
        printf("[3] - Imprimir Fornecedores\n");
        printf("[4] - Imprimir Produtos\n");
        printf("[5] - Excluir Fornecedores\n");
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
        case 5:
            printf("Id do fornecedor : ");
            scanf("%d",&id);
            excluirFornecedor(id);
            pausa();
            break;

        }
        system("clear");
    }while(opt!=0);
    return 0;
}
void pausa(void){
    fflush(stdin);
	getchar();
}
