#include <stdio.h>

int main() {
    float metros;
    printf("Digite o valor em metros: ");
    scanf("%f", metros);

    float decimetros = metros * 10;
    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    printf("Valor em decímetros: %.2f dm\n", decimetros); printf("Valor em centimetros: %f cm\n", centimetros);
    printf("Valor em milímetros: %.2f mm\n", milimetros);
    return 0;
}