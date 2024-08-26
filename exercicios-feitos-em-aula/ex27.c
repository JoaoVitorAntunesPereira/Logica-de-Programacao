#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j;
    float aux, soma = 0;
    srand(time(NULL));
    char vendedores[3][15] = {{"Carlos "},
               {"Roberto"},
               {"Sandro "}};
    char meses[14][10] = {{""},{"JAN   "},{"FEV   "},{"MAR   "},{"ABR   "},{"MAI   "},{"JUN   "},{"JUL   "},{"AGO   "},{"SET   "},{"OUT   "},{"NOV   "},{"DEZ   "}};		 
    float vendas[3][13];
    int maior;

    for(i=0;i<3;i++){	
      for(j=0;j<12;j++){
        aux=((float)rand() / RAND_MAX) * (999 - 100) + 100;
        vendas[i][j]=aux;
        soma+=aux;
      }
      vendas[i][12]=soma;
      soma=0;
    }

    for(i = 0; i < 3; i++){
       if (strlen(vendedores[i]) > strlen(vendedores[i-1])) {
        maior = strlen(vendedores[i]);
      }	
    }	

    for(i = 0; i < 3; i++){
      for(j = 0; j < (maior - strlen(vendedores[i])); j++){
        strcat(vendedores[i], "");
      }
    }

    for(i = 0; i <= maior+1; i++){
      strcat(meses[0], " ");
    }	

    for(i = 0; i < 13; i++){
      printf("%s|", meses[i]);
    }	
    printf("\n");
    for(i = 0;i < 3;i++){	
      printf("%s: ", vendedores[i]);
      for(j = 0;j < 12;j++){
        printf("|%.2f", vendas[i][j]);
      }
      printf("| Total: %.2f", vendas[i][12]);
      printf("\n");
    }

    for(i = 0; i < 3; i++){
      printf("%s: R$%.2f", vendedores[i], (vendas[i][12] / 10));
      printf("\n");
    }

    printf("%i", maior);

  }

