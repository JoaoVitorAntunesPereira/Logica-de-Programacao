#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int alt, num, i;
  srand(time(NULL));

  alt = rand()%10;

  do{
    printf("Adivinhe o número (inteiro): \n");
    scanf("%i",&num);
    i++;
    system("clear");
    if(num == alt){
      printf("Acerto!!!! O número é: %i, depois de %i tentativas", alt, i);	
    }else{
      if(alt < num){
        printf("O número é menor que o informado\n");
      }else{
        printf("O número é maior que o informado \n");
      }	
    }		
  }while(num != alt);

}	
