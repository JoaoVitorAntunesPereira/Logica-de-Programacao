#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int LIN=20;
  const int COL=20;
  int i,j;
  int matriz[LIN][COL];
  srand(time(NULL));

  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      matriz[i][j] = rand()%100;
    }
  }

  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      printf("[%d]", matriz[i][j]);
    }
    printf("\n");
  }		
}
