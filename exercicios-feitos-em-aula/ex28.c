/*2 3 3 1
3 2 1 3
3 1 2 3
1 3 3 2

fazer uma matriz que tenha isso */
#include <stdio.h>

int main() {
  int matriz[4][4];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i == j) {
        matriz[i][j] = 2;
      } else if ((i + j) == 3) {
        matriz[i][j] = 1; 
      } else { 
        matriz[i][j] = 3; 
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

