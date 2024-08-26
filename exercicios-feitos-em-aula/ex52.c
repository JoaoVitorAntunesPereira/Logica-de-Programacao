#include <stdio.h>

float media, n1, n2;

int main(void){
    
    return 0;
}

float calcMedia(float n1, float n2){
    media = (n1 + n2) / 2;
    return media;
}	

char verificaMedia(int media){
    if(calcMedia(n1, n2) >= 7){
        return 'A';
    }else{
        return 'R';
    }
}
