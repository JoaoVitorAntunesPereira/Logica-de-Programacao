#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int mat[3][3], i, j;

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			mat[i][j] = (i==j)? 0: (i>j)? 1 : 2;
	    }
	}

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("[%d]", mat[i][j]);
	   }
	   printf("\n");
	}
}