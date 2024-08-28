#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
  int i = 1;

  do{
    printf("Valor :");
    scanf("%d", &i);
    system("clear");
    //system("cls");
  }while(i != 0);		

}	
