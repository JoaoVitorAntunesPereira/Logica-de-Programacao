#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int wd = 20, i, nums = 50;
  int array[wd], aux, j, array2[wd];
  srand(time(NULL));

  for(i = 0; i < wd; i++){
    array[i] = rand()%nums;
    for(j = 0; j < i; j++){
      if((array[i] == array[j]) || (array[i] == array[0])){
        array[i] = rand()%nums;
        j = 0;
      }	
    }	

  }
  ord(array);
  for(i = 0; i < wd; i++){
    printf("[%i]", array[i]);
  }

  return 0;
}

/* int ord(int array[], int i, int j, int aux, int wd){
  for(i = 0; i < wd-1; i++){
    for(j = 0; j < wd-1; j++){
      if(array[j] > array[j+1]){
        aux = array[j];
        array[j] = array[j+1];
        array[j+1] = aux; 
      }	
    }	
  }
  return array;
} */