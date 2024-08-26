#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  char nome[50]="Asdrubaldo Souza Silva",nomeRef[50];
  int qtd,i=0,j=0,ultimoEsp;
   printf("\nNome informado %s",nome);
   qtd=strlen(nome)-1;
   for(i=0;i<qtd;i++){
     if(nome[i]==' ')
        ultimoEsp=i;
   }
   for(i=ultimoEsp;i<=qtd;i++){
      nomeRef[j]=toupper(nome[i]);
      j++;
    }
    nomeRef[j]=',';
    j++;
    nomeRef[j]=nome[0];
        j++;
    nomeRef[j]='.';
    j++;
   for(i=1;i<ultimoEsp;i++){
     if(nome[i]==' '){
        nomeRef[j]=nome[i+1];
        j++;
        nomeRef[j]='.';
  }
   }
   printf("\n%s",nomeRef);
  return 0;
}