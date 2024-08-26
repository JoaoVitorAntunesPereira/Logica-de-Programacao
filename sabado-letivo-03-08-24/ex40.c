#include <stdio.h>

int main(void){
    int i, j = 0;

    /* for(i = 10; i > 0; i++){
        printf("Linha %d \n",i);
    } */

   while(j >= 0){
    printf("Linha %d \n", j); 
    j--;
   }

    printf("Usando DO WHILE.");
    do{
        printf("Linha %d \n", j);
    }while(j > 0);
}