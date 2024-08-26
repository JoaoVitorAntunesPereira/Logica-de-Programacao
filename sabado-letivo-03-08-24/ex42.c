#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, j;
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("%d ", mat[1][1]);
    for (i = 0; i < 3 ;i++) {
        for (j = 0; j < 3 ;j ++ ){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }
    char nomes [2] [10]={{"asdrubaldo"}, {"anacleto"}};
    printf("%s\n", nomes[1]);
}