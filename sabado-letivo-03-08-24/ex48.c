#include <stdio.h>

int main(void){
    int valores[10];
    int i, j, temp = 0;
    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }
    for(i = 0; i < 10 - 1; i++){
        temp += valores[i];
    }

    printf("Soma dos valores digitados: %d\n", temp);
}
