#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  char nome[20] = "Asdrubaldo";
  char clone[20];
  printf("OLá meu nome é %s",nome);
  printf("\nA primeira letra do meu nome é %c", nome[0]);

  //Tamanho da String(ocupada)
  printf("\nMeu nome tem %lu caracteres",strlen(nome));

  //Copiar uma String e grava em outra variável
  strcpy(clone,nome);
  printf("\nString copiada %s", clone);

  //Comparar duas Strings
  //strcpy(clone,"aula");
  if(strcmp(nome,clone) == 0){
    printf("\nAs Strings são iguais");
  }else{
    printf("\nAs Strings não são iguais");
  }	

  //Contatenação de Strings
  strcpy(clone, " da Silva");
  printf("\n%s", strcat(nome, clone));

  return 0;
}
