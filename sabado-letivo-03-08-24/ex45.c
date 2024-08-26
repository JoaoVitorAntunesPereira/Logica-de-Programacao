#include <stdio.h>

int main() {
    char real = 'A';
    int numero;
    
    printf("Digite um número decimal: ");
    scanf("%d", &numero);
    
    int aux = (int) real; 
    
    printf("Número real: %d\n", aux);  
    printf("Número em decimal: %d\n", numero); 
    printf("Número em hexadecimal: %x\n", numero); 
    printf("Número em octal: %o\n", numero);
    
    return 0;
}
