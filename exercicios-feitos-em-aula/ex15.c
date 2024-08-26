#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int cartasJ[10], cartasC[10];
  int vitJ = 0, vitC = 0, i, cartaJ, cartaC,j;
  srand(time(NULL));

  //Distribuir cartas
  for(i = 0; i < 10; i++){
    cartasJ[i] = random()%14+1;
    cartasC[i] = random()%14+1;
  }

  for(j = 0; j < 10; j++){
    printf("Suas cartas\n");
    for(i = 0; i < 10; i++){
      printf("[%i]\n", cartasJ[i]);
    }

    printf("Informe a posição da carta que deseja jogar: ");
    scanf("%i",&cartaJ);

    cartaC = random()%9;

    if(cartasJ[cartaJ] > cartasC[cartaC]){
      vitJ++;
    }else{
      vitC++;
    }	

    printf("Computador [%d]. Sua carta [%d] \n", cartasC[cartaC], cartasJ[cartaJ]);
  }

  printf("  \n");
  printf("Resultado Final\n");
  printf("Computador [%d]. Você[%d] \n", vitC, vitJ);
  if(vitJ > vitC){
    printf("Você ganhou!\n");
  }else{
    printf("MUito ruim, perdeu pra um pc, um pc ruim ainda por cima");
  }	
}

