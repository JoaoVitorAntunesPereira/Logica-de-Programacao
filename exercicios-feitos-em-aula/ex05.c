#include <stdio.h>

int main(void){
  float peso, altura, imc, max, min;
  int sexo;

  printf("Informe a altura:");
  scanf("%f",&altura);
  printf("Informe o peso:");
  scanf("%f",&peso);

  imc = peso/(altura*altura);

  printf("Informe 0 - Masculino ou 1 - Feminino:");
  scanf("%i",&sexo);

  if(sexo == 0){
    max = 26;
    min = 19;
  }else{
    max = 24;
    min = 16;
  }
  if(imc > max){
    printf("Acima do peso em %.2f kg",peso-((peso * max) / imc));
  }else if (imc < min){
    printf("Abaixo do peso em %.2f kg",((peso * min) / imc)-peso);
  }else{
    printf("Peso normal");
  }	
}	
