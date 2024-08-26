#include <stdio.h>

int main(void){
  int num, i;

  printf("Informe um número");
  scanf("%d",&num);

  printf("FOR \n");
  for(i = 0; i <= 10; i++){
    printf("%d x %d = %d \n", num, i, (num*i));
  }

  //==================================================

  printf("WHILE \n");
  i = 0;
  while(i <= 10){		
    printf("%d x %d = %d \n", num, i, (num*i));
    i++;
  }

  //==================================================

  printf("DO WHILE \n");	
  i = 0;
  do{
    printf("%d x %d = %d \n", num, i, (num*i));
    i++;
  }while(i <= 10);	
}
