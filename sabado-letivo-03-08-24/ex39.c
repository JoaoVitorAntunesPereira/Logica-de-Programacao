#include <stdio.h>

int main(void){
    int a;
    printf("Informe um numero: ");
    scanf("%d", &a);

    if(a > 0){
        printf("O numero %d eh positivo.",a);
    }else if(a < 0){
        printf("O numero %d eh negativo.",a);
    }else{
        printf("O numero %d eh zero.",a);
    }

    printf("\nUsando ternario:\n");
    printf("%s",(a>0)?"O numero eh positivo":(a<0)?"O número eh negativo":"O numero eh zero");

    char caractere;
    //printf("\nUsando switch:\n");
    //printf("\nInforme um caractere:\n");
    //scanf("%c",&caractere);
    caractere = 'A';
    switch (caractere){
    case ('A'):
        printf("\nO numero referente ao A eh %d", (int)caractere);
        break;
    case ('B'):
        printf("\nO numero referente ao B eh %d", (int)caractere);
        break;
    case ('C'):
        printf("\nO numero referente ao C eh %d", (int)caractere);
        break;
    default:
        printf("\nCaractere invalido");
        break;
    }
}