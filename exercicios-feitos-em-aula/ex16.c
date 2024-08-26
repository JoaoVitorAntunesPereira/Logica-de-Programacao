#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int wd = 20, vet[wd], i, j, aux;
  srand(time(NULL));

  for(i = 0; i < wd; i++){
    vet[i] = random()%100;
  }
  for(i = 0; i < wd; i++){
    printf("[%d]", vet[i]);
  }

  printf("\nVetor ordenado \n");
  for(i = 0; i < wd-1; i++){
    for(j = 0; j < wd-1; j++){
      if(vet[j] > vet[j+1]){
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux; 
      }	
    }	
  }	

  for(i = 0; i < wd; i++){
    printf("[%d]", vet[i]);
  }
}

