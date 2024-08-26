#include <stdio.h>

int main(void){
  int anoNascimento, anoAtual, idade;

  printf("Informe o ano que você nasceu:");
  scanf("%d",&anoNascimento);
  printf("Informe o ano atual:");
  scanf("%d",&anoAtual);
  idade = anoAtual - anoNascimento;
  printf("No ano de %d você completa %d anos de vida", anoAtual, idade);
  printf("\n");

  //Descobrir se é maior ou menor de idade
  if (idade >= 18){
    printf("Você é maior de idade");
  }else{
    printf("Você é menor de idade");
  }
  printf("\n");

  //Isso aqui
  if (idade <12){
    printf("Você é uma criança");
  }else
  if(idade >= 12 && idade <=18){
    printf("Você é jovem");
  }else 
  if(idade > 18 && idade < 60){
    printf("Você é adulto");
  }else{
    printf("Você é idoso");
  }
  printf("\n");

  //Bissexto
  if(!(anoNascimento%4 && !(anoNascimento%100)) || anoNascimento%400){
    printf("O ano que você nasceu é bissexto");
  }
}
