#include <stdio.h>

void funcao1(int *, int);

int main(void){
  /*int a = 10;
  int b += a;
  int *ptr = b;
  ptr = &a;
  printf("Valor da variavel a %d\n", a);
  printf("Endereço da variavel a %d\n", &a);
  printf("Valor do ponteiro %d\n", &ptr);
  printf("Valor armazenado no ponteiro %d\n", ptr);
  printf("Valor armazenado no endereço apontado pelo ponteiro %d\n", *ptr);*/

  int a = 10, b = 10;
  funcao1(&a, b);
  printf("a=%d\nb=%d",a,b);

  return 0;
}	

void funcao1(int *a, int b){
  *a = 5;
  b = 5;
}	