#include <stdio.h>

int main(void){
    double preco;
    printf("Digite o preço do produto: ");
    scanf("%lf", &preco);
/* 
    if(preco < 100){
        preco = preco * 1.10;
    }else{
        preco = preco * 1.20;
    } */

    printf("Preço após a inflação: %.2lf\n", (preco < 100)?preco * 1.10 : preco * 1.20);
    return 0;
}