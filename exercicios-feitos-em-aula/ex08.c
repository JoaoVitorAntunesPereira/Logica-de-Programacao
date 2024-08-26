#include <stdio.h>

int main(void){
  int num, quant, i;

  printf("INforme um número inteiro: ");
  scanf("%i",&num);

  for(i = 1; i<=(num-1); i++){
    if(!(i%2)){
      quant++;
    }	
  }	

  printf("Existem %i números pares entre 0 e %i", quant, num);
}
