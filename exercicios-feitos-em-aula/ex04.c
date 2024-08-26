#include <stdio.h>

int main(void){
  int n;
  printf("INforme um número \n");
  scanf("%i",&n);

  if(n%2 == 0){
    printf("O número %i é par",n);
  }else{
    printf("O número %i é ímpar",n);
  }	
}

