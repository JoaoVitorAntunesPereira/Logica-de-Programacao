#include <stdio.h>

int main(){
    float max = 0, num;

    for(int i = 0; i < 3; i++){
        printf("Informe o %i° número: ",i+1);
        scanf("%f", &num);
        if(num > max){
            max = num;
        }
    }

    printf("O maior número é: %.2f",max);
}
