#include <stdio.h>
#include <math.h>

int main(){
    float lado1, lado2, raio;
    const PI = 3.14;
    printf("Informe o primeiro lado do retangulo");
    scanf("%f",&lado1);
    printf("Informe o segundo lado do retangulo");
    scanf("%f",&lado2);
    printf("\nA área do retangulo é: %.2f", lado1*lado2);


    printf("Informe o o raio do círculo");
    scanf("%f",&raio);
    printf("\nA área do círculo é: %.2f", (PI*(raio*raio)));
}
