#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j, cont = 0, k;
    const int LIN = 5, COL = 10;
    char respostas[LIN][COL];
    char gabarito[COL];
    int resultado[COL];
    char nomes[5][15] = {{"Carlos "},{"Roberto"},{"Sandro "},{"Joao   "},{"Pedro  "}};
    srand(time(NULL));

    printf("Respostas: \n");
    for(i = 0; i < LIN; i++){
        printf("%s: ",nomes[i]);
        for(j = 0; j < COL; j++){
            respostas[i][j] = 'a'+(rand()%4);
            printf("|%c|", respostas[i][j]);
        }
        printf("\n");
    }

    printf("Gabarito:");
    for(j = 0; j < COL; j++){
        gabarito[j] = 'a'+(rand()%4);
        printf("|%c|", gabarito[j]);
    }
    printf("\n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            if(respostas[i][j] == gabarito[j]){
                cont++;
            }
        }
        resultado[i] = cont;
        cont = 0;
    }

    printf("\nNotas\n");
    for(j = 0; j < LIN; j++){
        printf("|%i|", resultado[j]);
    }
    printf("\n");
}