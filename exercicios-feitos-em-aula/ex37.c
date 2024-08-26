#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int LIN = 4, COL = 4, i, j, k = 0;
  int mat1[LIN][COL], mat2[LIN][COL], vet[16];
  srand(time(NULL));

  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      mat1[i][j] = rand()%10;
    }
  }

  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      mat2[i][j] = rand()%10;
    }
  }

  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++, k++){
      if(((j+1) % 2 == 0)){
        vet[k] = mat1[i][j]+mat2[i][j];
      }else{
        vet[k] = mat1[i][j]-mat2[i][j];
      }
    }
  }

  printf("\nMatriz 1:\n");
  for (i = 0; i < LIN; i++) {
      for (j = 0; j < COL; j++) {
          printf("%d ", mat1[i][j]);
      }
      printf("\n");
  }

  printf("\nMatriz 2:\n");
  for (i = 0; i < LIN; i++) {
      for (j = 0; j < COL; j++) {
          printf("%d ", mat2[i][j]);
      }
      printf("\n");
  }

  printf("\nVetor:\n");
  for (i = 0; i < 16; i++) {
      printf("[%d] ", vet[i]);
  }
  printf("\n");
}
