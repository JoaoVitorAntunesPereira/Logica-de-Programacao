#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j, cont;
    srand(time(NULL));
    char mat[10][10];
    char busca;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            mat[i][j] = 'a'+(rand()%26);
            printf("|%c|", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um caractere: ");
    scanf("%c", &busca);
    for ( i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(busca == mat[i][j]){
                cont++;
            }
        }
    }
    if(busca !=0){
        printf("O caractere %c foi encontrado %i vezes.", busca, cont);
    }else{
        printf("O caractere %c não foi encontrado.", busca);
    }
}