#include <stdio.h>

int main() { 
    double fahrenheit, celsius;
    printf("Digite o valor em graus Fahrenheit: ");
    scanf("%lf", & fahrenheit);
    celsius = (fahrenheit - 32.0) * (5.0/ 9.0);
    printf("Temperatura em Celsius: %.2lf\n", celsius);
    return 0;
}