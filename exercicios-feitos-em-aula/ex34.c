#include <stdio.h>
#include <math.h>

int main(){
    float velocidade, tempo;

    printf("Informe a velocidade do carro em k/h: ");
    scanf("%f",&velocidade);
    printf("Informe o tempo que o carro percorre em horas: ");
    scanf("%f",&tempo);
    printf("A distância percorrida pelo carro foi: %.2fkm", velocidade * tempo);
}