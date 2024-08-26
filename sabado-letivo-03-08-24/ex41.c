#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int vet[5]={1,2,3,4,5}; 
    int i;
    srand(time(NULL));

    printf("%d,",vet[0]);
    printf("%d,", vet[1]);
    printf("%d,", vet[2]);
    printf("\n");

    for(i=0;i<5;i++){
        vet[i] = rand()%10;
    }

    for(i=0;i<5;i++){
        printf("%d,", vet[i]);
    }
}