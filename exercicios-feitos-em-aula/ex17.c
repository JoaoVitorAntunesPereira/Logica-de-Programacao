#include <stdio.h>

int main(){
  int n, m, sum = 0, i;
  char op;
  float vet[10];
  float result;
  do{
    printf("Digite um número: ");
    scanf("%d",&n);
    printf("Digite outro número: ");
    scanf("%d",&m);
    printf("Operação: (+, -, /, *)\n");
    scanf(" %c",&op);
    switch(op){
      case '+':
        result = n+m;
        printf("%i + %i = %f",n,m,result);
        vet[sum] = result;
        sum++;
        break;
      case '-':
        result = n-m;
        printf("%i - %i = %f",n,m,result);
        vet[sum] = result;
        sum++;
        break;
      case '/':
        result = n/m;
        printf("%i / %i = %f",n,m,result);
        vet[sum] = result;
        sum++;
        break;
      case '*':
        result = n*m;
        printf("%i * %i = %f",n,m,result);
        vet[sum] = result;
        sum++;
        break;
      default:
        printf("Operação Inválida");
        break;
    }
    if(sum == 9){
      break;
    }	
    printf("\n Novo cálculo? s/n");
    scanf(" %c",&op);
  }while(op != 'n');

  for(i = 0; i<sum; i++){
    printf("%f \n", vet[i]);
  }	
}	
