#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  int wd = 10;
  int j1[wd], j2[wd], j3[wd], j4[wd];
  int i, j, j1s = 0, j2s = 0, j3s = 0, j4s = 0, maior, pos, soma, aux;
  srand(time(NULL));

  for(i = 0; i < wd; i++){
    j1[i] = 1+ rand()%12;
    j1s += j1[i];
    j2[i] = 1+ rand()%12;
    j2s += j2[i];
    j3[i] = 1+ rand()%12;
    j3s += j3[i];
    j4[i] = 1+ rand()%12;
    j4s += j4[i];
  }

  for(j = 0; j < wd-1; j++){
    for(i = 0; i < wd-1; i++){
      if(j1[i] > j1[i+1]){
        aux = j1[i];
        j1[i] = j1[i+1];
        j1[i+1] = aux;
      }
    }
  }

  printf("\n");

  maior = j1s;
  pos = 1;

  if(j2s > maior){
    maior = j2s;
    pos = 2;
  }else if(j3s > maior){
    maior = j3s;
    pos = 3;
  }else if(j4s > maior){
    maior = j4s;
    pos = 4;
  }

  printf("O ganhador foi o jogador número %i com %i pontos!",pos, maior);
  printf("\n");
  for(j = 1; j <= 4; j++){
    printf("Jogador %i: ", j);
    for(i = 0; i < 10; i++){
      if(j == 1){
        printf("[%i], ", j1[i]);
        soma = j1s;
      }
      if(j == 2){
        printf("[%i], ", j2[i]);
        soma = j2s;
      }
      if(j == 3){
        printf("[%i], ", j3[i]);
        soma = j3s;
      }
      if(j == 4){
        printf("[%i], ", j4[i]);
        soma = j4s;
      }
    }
    printf("Soma = %i \n", soma);
  } 

  /*printf("Jogador 1: ");
  for(i = 0; i < 10; i++){
    printf("[%i], ", j1[i]);
  }printf("SOMA = [%i] ", j1s);

  printf("\n");

  printf("Jogador 2: ");
  for(i = 0; i < 10; i++){
    printf("[%i], ", j2[i]);
  }printf("SOMA = [%i] ", j2s);

  printf("\n");

  printf("Jogador 3: ");
  for(i = 0; i < 10; i++){
    printf("[%i], ", j3[i]);
  }printf("SOMA = [%i] ", j3s);

  printf("\n");

  printf("Jogador 4: ");
  for(i = 0; i < 10; i++){
    printf("[%i], ", j4[i]);
  }printf("SOMA = [%i] ", j4s);*/
  return 0;
}
