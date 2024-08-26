#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  char str[20] = "MOlera";
  char strInv[20];
  int i, qtd = strlen(str)-1;
  printf("str: %s", str);
  for(i = 0; i <= qtd; i++){
    strInv[i] = str[qtd - i]; 
  }	
  printf("\nstrInv: %s", strInv);
  return 0;
}
