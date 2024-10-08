#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

#include "fornecedores.c"
#include "produtos.c"

void pausa(void);

int main(void){
    int opt, id;
    char nome[30];
    do{
        printf("Informe a opção desejada\n");
        printf("[0] - Sair\n");
        printf("[1] - Registrar Fornecedor\n");
        printf("[2] - Registrar Produto\n");
        printf("[3] - Imprimir Fornecedores\n");
        printf("[4] - Imprimir Produtos\n");
        printf("[5] - Excluir Fornecedor\n");
        printf("[6] - Excluir Produto\n");
        printf("[7] - Alterar Fornecedor\n");
        printf("[8] - Alterar Produto\n");
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
			fflush(stdin);
			printf("Informe o codigo do fornecedor que deseja excluir: ");
			scanf("%d", &id);
            excluirFornecedor(id);
            pausa();
            break;
        case 6:
			fflush(stdin);
			printf("Informe o nome do produto que deseja excluir: ");
			scanf("%s", nome);
            excluirProduto(nome);
            pausa();
            break;
        case 7:
			fflush(stdin);
			printf("Informe o codigo do fornecedor que deseja alterar: ");
			scanf("%d", &id);
            alterarFornecedor(id);
            pausa();
            break;
        case 8:
			fflush(stdin);
			printf("Informe o nome do produto que deseja alterar: ");
			scanf("%s", nome);
            alterarProduto(nome);
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
