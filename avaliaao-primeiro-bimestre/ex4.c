#include <stdio.h>
int main(void){
    int i;
    printf("For: \n");
    for(i=0;i<10;i+=2){
        printf("%d\n",i);
    }

    i = 0;
    printf("While: \n");
    while (i < 10){
        printf("%d\n",i);
        i+=2;
    }
}

