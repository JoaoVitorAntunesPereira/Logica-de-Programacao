#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int train[100], num, i, sum, tem = 0, quant = 0;
  srand(time(NULL));

  for(i = 0; i < 100; i++){
    //printf("INforme um número para colocar na posição %i do vetor", i);
    //scanf("%i",&num);
    train[i] = rand()%10;
  }

  for(i = 0; i < 100; i++){
    if(!(train[i]%2)){
      printf("PAR %i \n",train[i]);	
    }else{
      printf("ÍMPAR %i \n",train[i]);	
    }	
    sum+=train[i];
  }	

  printf("Informe o número que deseja buscar \n");
  scanf("%i",&num);

  for(i = 0; i < 100; i++){
    if(train[i] == num){
      tem = 1;
      quant++;
    }	
  }

  if(tem){
    printf("O número %i existe no vetor, e aparece %i vezes", num, quant);
  }else{
    printf("O número %i não existe no vetor", num);
  }		

  printf("\nSOMA %i",sum);

}
