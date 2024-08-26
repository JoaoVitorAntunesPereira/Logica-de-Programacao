#include <stdio.h>

int main() {
    /*for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, (i*j));
        }
        printf("\n**************************\n");
    }*/

    int i = 1, j = 1;
    
    do{
        j = 1;
        do{
            printf("%d x %d = %d\n", i, j, (i*j));
            j++;
        }while(j <= 9);
        printf("\n**************************\n");
        i++;
    }while(i <= 9);
    
    return 0;
}
