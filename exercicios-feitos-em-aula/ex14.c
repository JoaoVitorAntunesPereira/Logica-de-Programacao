#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
  int vet[1000], i, j, soma = 0;
  srand(time(NULL));
  for(i = 0; i< 1000; i++){
    vet[i] = random()%2000;
  }	

  for(j = 0; j < 1000; j++){
    for(i = 2; i < vet[j]; i++){
      if(vet[j]%i == 0){
        break;
      }
    }	
    if(i==vet[j]){
      printf("\n %i é primo \n",vet[j]);	
      soma++;
    }	
  }	

  printf("\nO total de números primos é: %i",soma);
}
