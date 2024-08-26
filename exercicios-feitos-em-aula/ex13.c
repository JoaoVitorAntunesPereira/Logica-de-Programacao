#include <stdio.h>

int main(void){
  int num, i;

  printf("Informe um número \n");
  scanf("%d",&num);

  for(i = 2; i < num; i++){
    if(num%i == 0){
      printf("%i não é primo, pois é divisível por %i", num, i);
      break;
    }else{
      printf("%i é primo",num);	
    }	
  }	

}