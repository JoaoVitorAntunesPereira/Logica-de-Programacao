#include <stdio.h>
#include <math.h>

int main(){
  int parteInteira;
  float parteDecimal;
  float n = 85.65;
  parteInteira = (int)n;
  parteDecimal = n-parteInteira;
  printf("Número n %.2f\n", n);
  printf("Parte Inteira %d", parteInteira);
  printf("\nParte Decimal %.2f", parteDecimal);

  return 0;
}
