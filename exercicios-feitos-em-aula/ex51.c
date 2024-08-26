#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int gerarNumeroAleatorio();
char verificaNumero(int);

int main(void){
  int alt = gerarNumeroAleatorio();
  int n;
  do{

  }while(verificaNumero(n) != '=');

  return 0;
}	

int gerarNumeroAleatorio(void){
  srand(time(NULL));
  return rand()%100;
}

char verificaNumero(int n){

}		
