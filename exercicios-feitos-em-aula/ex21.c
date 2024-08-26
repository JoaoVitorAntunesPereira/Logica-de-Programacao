#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
  char nome[50];
  int i, lengStr, esp = 1;
  printf("Seu nome: ");
  fgets(nome, 50, stdin);
  printf("\nNome informado: %s", nome);
  lengStr = strlen(nome);

  for(i = 0; i < lengStr; i++){
    nome[i] = toupper(nome[i]);
    if(nome[i] == ' ') esp++;
  }	

  printf("\nNome máusculo: %s", nome);
  printf("\nNúmero de palavras: %i", esp);
  return 0;
}