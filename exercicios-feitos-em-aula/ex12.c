#include <stdio.h>

int main(void){
  int num;
  char opt;

  do{
    printf("Informe um número \n");
    scanf("%d",&num);

    if(num%2 == 0){
      printf("%d é par \n", num);
    }else{
      printf("%d é impar \n", num);
    }
    printf("========================= \n");
    printf("Deseja continuar? s/n: ");
    scanf(" %c",&opt);
  }while(opt != 'n');	
}