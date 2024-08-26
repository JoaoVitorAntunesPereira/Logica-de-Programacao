#include <stdio.h>
#include <string.h>
int main(void){
    char str1[8]={"Analise"};
    char str2[3]={"de"};
    char str3[9]={"sistemas"};
    strcat(str1," ");
    strcat(str1,str2);
    strcat(str1," ");
    strcat(str1,str3);
    printf("%s",str1);
}
