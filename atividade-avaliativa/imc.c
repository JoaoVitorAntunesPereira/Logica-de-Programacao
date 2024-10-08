#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
  char nome[10];
  int idade;
  float peso;
  float altura;
  char genero[9];
}PESSOA;
FILE* abreArquivo(char*, char*);
void incluirPessoas(void);
void avaliarPessoa(void);
void pmax_pmin(PESSOA,float);
void imprimirResultado(char*);

 char *arq = "pessoas.txt";
 PESSOA pessoas[1000];
 PESSOA p;
 float pMax,pMin;
 int i=0,nivel;


 FILE* abreArquivo(char *nomeArquivo, char *p){
    FILE *arquivo = fopen(nomeArquivo, p);

    if (arquivo == NULL) {
       perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }
    else{
        return arquivo;

    }

    fprintf(arquivo, "%s %d", "texto", 56);

    fputs("texto pra colocar", arquivo);

 }


void pmax_pmin(PESSOA p,float imc){
    if(strcmp(p.genero,"masculino")==0){
       if(imc>39.9){
           pMax=(39.9*p.peso)/imc;
           nivel=3;
       }
       else if(imc>=30&& imc<39.9){
           pMax=(35*p.peso)/imc;
           nivel=2;
       }
       else if(imc>=25&& imc<29.9){
           pMax=(27*p.peso)/imc;
           nivel=1;
       }
       else if(imc>=20&& imc<24.9){
           pMax=(24.9*p.peso)/imc;
           pMin=(20*p.peso)/imc;
           nivel =0;
       }
       else{
        pMin=(19.9*p.peso)/imc;
        nivel =-1;
       }
    }
    else{
        if(imc>38.9){
           pMax=(38.9*p.peso)/imc;
           nivel=3;
       }
       else if(imc>=29&& imc<38.9){
           pMax=(34*p.peso)/imc;
           nivel=2;
       }
       else if(imc>=24&& imc<28.9){
           pMax=(26*p.peso)/imc;
           nivel=1;
       }
       else if(imc>=19&& imc<23.9){
           pMax=(23.9*p.peso)/imc;
           pMin=(19*p.peso)/imc;
           nivel =0;
       }
       else{
        pMin=(18.9*p.peso)/imc;
        nivel =-1;
       }
    }
}
void avaliarPessoa() {
    float imc, aux;
    char conteudo[256];
    char convertido[20];
    for(int i = 0; i < 1000; i++) {
        if (pessoas[i].idade == 0) break;
        imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
        pmax_pmin(pessoas[i], imc);

        conteudo[0] = '\0';
        strcpy(conteudo, pessoas[i].nome);

        sprintf(convertido, "%d", pessoas[i].idade);
        strcat(conteudo, convertido);
        strcat(conteudo, " anos");
        strcat(conteudo, "\nPeso :");
        sprintf(convertido, " %.2f", pessoas[i].peso);
        strcat(conteudo, convertido);

        strcat(conteudo, "\nAltura: ");
        sprintf(convertido, "%.2f", pessoas[i].altura);
        strcat(conteudo, convertido);

        strcat(conteudo, "\nIMC: ");
        sprintf(convertido, "%.2f", imc);
        strcat(conteudo, convertido);

        switch (nivel) {
            case 3:
                strcat(conteudo, "\nObesidade Morbida Acima do peso em ");
                aux = (pessoas[i].peso - pMax);
                sprintf(convertido, "%.2f", aux);
                strcat(conteudo, convertido);
                strcat(conteudo, "Kg");
                break;
            case 2:
                strcat(conteudo, "\nObesidade Moderada Acima do peso em ");
                aux = (pessoas[i].peso - pMax);
                sprintf(convertido, "%.2f", aux);
                strcat(conteudo, convertido);
                strcat(conteudo, "Kg");
                break;
            case 1:
                strcat(conteudo, "\nObesidade Leve Acima do peso em ");
                aux = (pessoas[i].peso - pMax);
                sprintf(convertido, "%.2f", aux);
                strcat(conteudo, convertido);
                strcat(conteudo, "Kg");
                break;
            case 0:
                strcat(conteudo, "\nPeso Normal Peso máximo: ");
                sprintf(convertido, "%.2f", pMax);
                strcat(conteudo, convertido);
                strcat(conteudo, "Kg");
                break;
            case -1:
                strcat(conteudo, "\nPeso abaixo do normal em ");
                aux = (pMin - pessoas[i].peso);
                sprintf(convertido, "%.2f", aux);
                strcat(conteudo, convertido);
                strcat(conteudo, "Kg");
                break;
        }

        strcat(conteudo, "\n\n");
        printf("%s",conteudo);
        imprimirResultado(conteudo);
    }
    printf("*** Registros salvos no arquivo resultados.txt ***\n\n");
}

void imprimirResultado(char *conteudo){
     FILE *a= abreArquivo("resultado.txt","a");
     fprintf(a,"%s",conteudo);
     fclose(a);

}
 void incluirPessoas(void){

   FILE *a= abreArquivo(arq,"r");
   while (fscanf(a, "%s %d %s %f %f",p.nome,&p.idade,p.genero,&p.peso,&p.altura) == 5){
          pessoas[i++]= p;
    }
     fclose(a);
 }


void exibirEstatisticas() {
    int homens = 0, mulheres = 0, homensAcimaPeso = 0, mulheresAcimaPeso = 0, homensPesoNormal = 0, mulheresPesoNormal = 0, homensAbaixoPeso = 0, mulheresAbaixoPeso = 0;
    PESSOA maisAlta, maisBaixa, maisGorda, maisMagra;

    maisAlta = maisBaixa = maisGorda = maisMagra = pessoas[0];

	for(int i = 0; i < 1000; i++){
        if(strcmp(pessoas[i].genero, "Masculino") == 0){
            homens++;
         }else if(strcmp(pessoas[i].genero, "Feminino") == 0){
            mulheres++;
        }

        float imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);
        pmax_pmin(pessoas[i], imc);

        if(nivel == 3 || nivel == 2 || nivel == 1){ 
            if(strcmp(pessoas[i].genero, "Masculino") == 0){
                homensAcimaPeso++;
            }else{
                mulheresAcimaPeso++;
            }
        }else if(nivel == 0){
            if(strcmp(pessoas[i].genero, "Masculino") == 0){
                homensPesoNormal++;
            }else{
                mulheresPesoNormal++;
            }
        }else if(nivel == -1) {
            if(strcmp(pessoas[i].genero, "Masculino") == 0){
                homensAbaixoPeso++;
            }else{
                mulheresAbaixoPeso++;
            }
        }

        if (pessoas[i].altura > maisAlta.altura) {
            maisAlta = pessoas[i];
        }
        if (pessoas[i].altura < maisBaixa.altura) {
            maisBaixa = pessoas[i];
        }
        if (pessoas[i].peso > maisGorda.peso) {
            maisGorda = pessoas[i];
        }
        if (pessoas[i].peso < maisMagra.peso) {
            maisMagra = pessoas[i];
        }
	}

 
    printf("Quantidade de homens: %d\n", homens);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Quantidade de homens acima do peso: %d\n", homensAcimaPeso);
    printf("Quantidade de mulheres acima do peso: %d\n", mulheresAcimaPeso);
    printf("Quantidade de homens no peso normal: %d\n", homensPesoNormal);
    printf("Quantidade de mulheres no peso normal: %d\n", mulheresPesoNormal);
    printf("Quantidade de homens abaixo do peso: %d\n", homensAbaixoPeso);
    printf("Quantidade de mulheres abaixo do peso: %d\n", mulheresAbaixoPeso);
    
    printf("Pessoa mais alta: %s com %.2f metros\n", maisAlta.nome, maisAlta.altura);
    printf("Pessoa mais baixa: %s com %.2f metros\n", maisBaixa.nome, maisBaixa.altura);
    printf("Pessoa mais gorda: %s com %.2f Kg\n", maisGorda.nome, maisGorda.peso);
    printf("Pessoa mais magra: %s com %.2f Kg\n", maisMagra.nome, maisMagra.peso);
}

int main(void){
  incluirPessoas();
  avaliarPessoa();
	exibirEstatisticas();
  return 0;
}
