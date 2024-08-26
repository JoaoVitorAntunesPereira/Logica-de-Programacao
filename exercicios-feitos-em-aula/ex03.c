#include <stdio.h>

int main(void){
  float nota_1, nota_2, nota_3, nota_4, media;
  float p1 = 30, p2 = 30, p3 = 20, p4 = 20;
  char conceito;

  printf("Informe a primeira nota \n");
  scanf("%f",&nota_1);
  printf("Informe a segunda nota \n");
  scanf("%f",&nota_2);
  printf("Informe a terceira nota \n");
  scanf("%f",&nota_3);
  printf("Informe a quarta nota \n");
  scanf("%f",&nota_4);

  media = (nota_1*p1+nota_2*p2+nota_3*p3+nota_4*p4)/100;

  if(media >= 8){
    conceito = 'A';
  }else if(media >= 6 && media <8){
    conceito = 'B';
  }else if(media >=4 && media < 6){
    conceito = 'C';
  }else{
    conceito = 'D';
  }

  printf("Média: %.2f. Conceito: %c",media, conceito);
}	