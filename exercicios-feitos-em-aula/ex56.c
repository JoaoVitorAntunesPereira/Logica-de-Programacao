/*
 Crie um programa para auxiliar um banco a lierar ou não crédito para clientes
 os critérios são:
 O cliente deve ser maior de idade (dever ter uma função para verificar isto)
 O Cliente deve ter mais de 10.000 de saldo em sua conta(Deve ter uma função para verificar isto)
 O cliente deve possuir bens em seu nome(deve ter uma função para verificar isto)
 Ao final a resposta do programa deve ser se o banco deve ou não liberar crédito para o cliente
 */
#include <stdio.h>

  int verificaIdade(int);
  int verificaSaldo(float);
  int verificaBens(int);
  int idade, bens;

 int main(void){
  float saldo;

  printf("Inform sua idade: \n");
  scanf("%i", &idade);

  printf("Informe seu saldo: \n");
  scanf("%f", &saldo);

  printf("Informe quantos bens você possui: \n");
  scanf("%i", &bens);


  if((verificaIdade(idade) + verificaSaldo(saldo) + verificaBens(bens)) == 3){
    printf("Crédito liberado.");
  }else{
    printf("Não foi possível liberar seu crédito");
  }		
  return 0;
} 


int verificaIdade(int idade){
  if(idade >= 18){
    return 1;
  }else{
    return 0;
  }		
}

int verificaSaldo(float saldo){
  if(saldo >= 10000){
    return 1;
  }else{
    return 0;
  }	
}

int verificaBens(int bens){
  if(bens >= 1){
    return 1;
  }else{
    return 0;
  }	

}