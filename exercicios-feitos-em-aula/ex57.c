
/*
 Crie um programa para auxiliar um banco a lierar ou não crédito para clientes
 os critérios são:
 O cliente deve ser maior de idade 
 O Cliente deve ter mais de 10.000 de saldo em sua conta, maior ou igual a 30% do empréstimo
 O cliente deve possuir bens em seu nome, e o valor dos bens deve ser maior ou igual a 80% do empréstimo
 Ao final a resposta do programa deve ser se o banco deve ou não liberar crédito para o cliente
 Informar o valor do empréstimo
 */
#include <stdio.h>

  int verificaIdade57(int);
  int verificaSaldo57(float, float);
  int verificaBens57(float, float);

 int main(void){
  int idade;
  float saldo, bens, emprestimo;

  printf("Inform sua idade: \n");
  scanf("%i", &idade);

  printf("Informe seu saldo: \n");
  scanf("%f", &saldo);

  printf("Informe o valor dos seus bens: \n");
  scanf("%f", &bens);

  printf("Informe o valor do empréstimo que deseja: \n");
  scanf("%f", &emprestimo);

  if((verificaIdade57(idade) + verificaSaldo57(saldo, emprestimo) + verificaBens57(bens, emprestimo)) == 3){
    printf("Crédito liberado.");
  }else{
    printf("Não foi possível liberar seu crédito");
  }		
  return 0;
} 


int verificaIdade57(int idade){
  if(idade >= 18){
    return 1;
  }else{
    return 0;
  }		
}

int verificaSaldo57(float saldo, float emprestimo){
  if(saldo >= (emprestimo * 0.30)){
    return 1;
  }else{
    return 0;
  }	
}

int verificaBens57(float bens, float emprestimo){
  if(bens >= (emprestimo * 0.80)){
    return 1;
  }else{
    return 0;
  }	

}
