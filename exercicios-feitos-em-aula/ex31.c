#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int const LIN = 10, COL = 5;
    int mat[LIN][COL];
    int i, j, num;
    srand(time(NULL));

    printf("Método 1: \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
           /*  if(i == 0){
                num = (rand() % 9);
                mat[i][j] = num;
            }else{ */
                num = (rand() % 10) + (i*10);
                mat[i][j] = num;
           /*  } */
        }
    }
    for(i = 0; i < LIN; i++){
        printf("%i - %i:", i*10,i*10+9);
        for(j = 0; j < COL; j++){
            printf("|%i|", mat[i][j]);
        }
        printf("\n");
    }


    printf("Método 2: \n");
    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            num = (rand() % 100);
            if((num <= ((i * 10) + 9)) && (num >= i * 10)){
                mat[i][j] = num;
            }else{
                mat[i][j] = 0;
            }
        }
    }

    for(i = 0; i < LIN; i++){
        printf("%i - %i:", i*10,i*10+9);
        for(j = 0; j < COL; j++){
            printf("|%i|", mat[i][j]);
        }
        printf("\n");
    }
}
