#include <stdio.h>

int main(){
  int i;
  char nomes[3][15] = {{"Carlos"},
             {"Roberto"},
             {"Sandro"}};

  for(i=0;i<3;i++){
    printf("%s\n",nomes[i]);
  }

  for(i=0;i<3;i++){
    printf("Informe o %iº nome: ", (i));
    scanf("%s\n",&nomes[i]);
  }	

  printf("Nomes alterados\n");

  for(i = 0; i < 3; i++){
    printf("%s\n", nomes[i]);
  }	
}

