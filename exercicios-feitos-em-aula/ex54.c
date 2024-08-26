/*
 Criar um programa  que realize as 4 operações matemáticas
 soma, subtração, multiplicação e divisão
 para o caso da divisão dever se ter o cuidado de verificar o erro de divisão por zero
 */
#include<stdio.h>
#include <string.h>
 //declaração de funções
 float somar55(float, float);
 float subtrair55(float, float);
 float multiplicar55(float, float);
 float dividir55(float, float);
 float resultado;

int main(void){
  float n1,n2;
  int opt, aux;

  //gravar valores em n1 e n2 com scanf ou rand
  printf("Informe o 1º numero: ");
  scanf("%f",&n1);
  printf("Informe o 2º numero: ");
  scanf("%f",&n2);

  //optar pela operação matemática desejada
  do{  
  printf("Informe a operação.\n");
  printf("1: +\n2: -\n3: x\n4: /\n");
  scanf("%i",&opt);

  switch(opt){
    case 1:
      somar55(n1, n2);
      aux = 1;
      break;
    case 2:
      subtrair55(n1, n2);
      aux = 1;
      break;
    case 3:
      multiplicar55(n1, n2);
      aux = 1;
      break;
    case 4:
      dividir55(n1, n2);
      aux = 1;
      break;
    default:
      aux = 0;
  }

  }while(aux != 1);

  //imprimir o resultado da operação matemática
  printf("Resultado: %.2f", resultado);
  return 0;
}

 float somar55(float n1, float n2){
  resultado = n1 + n2;
  return resultado;
}
 float subtrair55(float n1, float n2){
  resultado = n1 - n2;
  return resultado;
}
 float multiplicar55(float n1, float n2){
  resultado = n1 * n2;
  return resultado;
}
 float dividir55(float n1, float n2){
  resultado = n1 / n2;
  return resultado;
}