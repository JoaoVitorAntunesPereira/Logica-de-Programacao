#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    const int linhas = 5;
    const int colunas = 3;
    int i, j;
    float matriz[linhas][colunas];
    float soma_colunas_pares = 0.0;
    float soma_colunas_impares = 0.0;
    srand(time(NULL));

    printf("Digite os valores para uma matriz de %d linhas por %d colunas: \n", linhas, colunas);
    for ( i = 0; i < linhas; i++){
        for ( j = 0; j < colunas; j++){
            /* printf("Elemento [$d][%d]", i, j);
            scanf("%f", &matriz[i][j]); */
            matriz[i][j] = rand()%50;
        }
    }

    for ( j = 0; j < colunas; j+=2){
        for ( i = 0; i < linhas; i++){
            soma_colunas_pares += matriz[i][j];
        }
    }
    
    for ( i = 0; i < linhas; i+=2){
        for (j = 0; i < colunas; i++){
            soma_colunas_impares = matriz[i][j];
        }
    }
    
    int aux = 0, aux2 = 0, cont = 0, maisAparece = 0,vetor[10];

    for ( i = 0; i < 10; i++){
            aux = vetor[i];
            for ( i = 0; i < 10; i++){
                if(vetor[i] == aux){
                    cont++;
                }
        }
        if(cont > aux2){
            aux2 = cont;
            maisAparece = aux;
        }
    }
    


    float media_colunas_pares = soma_colunas_pares / (linhas * (colunas / 2));
    float media_colunas_impares = soma_colunas_impares / (colunas * (linhas / 2));

    float diferenca = media_colunas_pares - media_colunas_impares;

    for ( i = 0; i < linhas; i++){
        for ( j = 0; j < colunas; j++){
            /* printf("Elemento [$d][%d]", i, j);
            scanf("%f", &matriz[i][j]); */
            printf("|%f|", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Diferença entre colunas impares e pares: %.2f", diferenca);
            printf("mais aparece|%d|", maisAparece);
}