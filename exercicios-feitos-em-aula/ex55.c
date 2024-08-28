/*
 * Criar um programa que informe quantas vogais existem em uma palavra 
 */

#include <stdio.h>
#include <ctype.h>
//declaração de funções
int contarVogais55(char*);

//declaração de variáveis globais

char palavra[10];


int main(void){
  printf("Informe uma palavra de até 10 caracteres: ");
  scanf("%s", palavra);
  printf("A palavra %s tem %i vogais.", palavra, contarVogais55(palavra));
  return 0;
}


int contarVogais55(char *palavra){
  int i, vogais = 0;

  for(i = 0; i < 10; i++){
    palavra[i] = tolower(palavra[i]);
    if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
      vogais++;
    }	
  }	

  return vogais;
}	
