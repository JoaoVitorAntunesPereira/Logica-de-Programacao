#include <stdio.h>

int main(void){
  int i;
  for(i=10; i<20; i+=2){
    printf("Linha do for %d \n", i);
  }	

  printf("************************************* \n");

  while(i<20){
    printf("Linha do enquanto %d \n",i);
    i++;
  }	

  printf("************************************* \n");

  do{
    printf("Linha do faça enquanto %d \n", i);
    i++;
  }while(i<20);
}

