#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	srand(time(NULL));
    int temperatura = rand()%40; 

    printf("%s",(temperatura < 20)?"Frio":(temperatura >= 20 && temperatura < 30)?"Ameno":"Calor");
/*     if(temperatura<20)
      printf("Frio");
    else if(temperatura >=20 && temperatura<30)  
      printf("Ameno");
    else
      printf("Calor"); */
}
