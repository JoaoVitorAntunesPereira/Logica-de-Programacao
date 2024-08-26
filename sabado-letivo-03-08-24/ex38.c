#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    int raiz, resultado;
    
    a = 10;    // Inicializa a com 10
    b = a;     // b recebe o valor de a, então b = 10
    a++;       // Incrementa a, então a = 11
    b--;       // Decrementa b, então b = 9
    c = a + b; // c recebe a soma de a e b, então c = 11 + 9 = 20
    c += 5;    // c recebe ele mesmo mais 5, então c = 25
    
    printf("%d\n", c); // Imprime o valor de c, que é 25
    
    raiz = sqrt(25); // raiz recebe a raiz quadrada de 25, que é 5
    printf("%d\n", raiz); // Imprime o valor de raiz, que é 5
    
    resultado = pow(a, 3); // resultado recebe a elevado à terceira potência, então resultado = 11^3 = 1331
    printf("%d\n", resultado); // Imprime o valor de resultado, que é 1331
}
