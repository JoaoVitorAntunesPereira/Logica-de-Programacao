#include <stdio.h>

int a, b, r;
int somar(void);
int subtrair(void);

int main(void){	
    int result;
    subtrair();
    printf("Resultado %d + %d = %d\n", a, b, somar());
    printf("Resultado %d - %d = %d", a, b, subtrair());
    return 0;
}

int somar(void){
    a = 10;
    b = 20;
    r = a + b;
    return r;
}	

int subtrair(void){
    a = 10;
    b = 20;
    r = a - b;
    return 0;
}
