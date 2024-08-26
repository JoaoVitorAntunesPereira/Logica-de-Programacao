#include <stdio.h>
#include <string.h>
#define ALUNOS 10
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

//Declaração de funções
void registrarAluno(void);
void registrarNotas(void);
void notaParaConceito(void);
void mostrarConceitos(void);

//Declaração de vaiáveis globais
char alunos[ALUNOS][30];
char conceitos[ALUNOS];
float bim1[ALUNOS];
float bim2[ALUNOS];
float bim3[ALUNOS];
float bim4[ALUNOS];
int i, j, aux;
char nome;

int main(void){
    registrarAluno();
    registrarNotas();
    notaParaConceito();
    mostrarConceitos();
    return 0;
}

void registrarAluno(void){
    for(i = 0; i < ALUNOS; i++){
        snprintf(alunos[i], 10, "%s%d", "Aluno ", i+1);
    }
}

void registrarNotas(void){
    srand(time(NULL));
    for(i = 0; i < 4; i++){
        for(j = 0; j < ALUNOS; j ++){
            aux = rand()%99;

            if(i == 0){
                bim1[j] = aux;
            }else if(i == 1){
                bim2[j] = aux;
            }else if(i == 2){
                bim3[j] = aux;
            }else if(i == 3){
                bim4[j] = aux;
            }
        }
        printf("\n");
    }

   /* for(i = 0; i < ALUNOS; i++){
        bim1[i] = rand()%100;
        bim2[i] = rand()%100;
        bim3[i] = rand()%100;
        bim4[i] = rand()%100;
    }
*/
    for(i = 0; i < ALUNOS; i++){
        printf("Notas do aluno %d: \n", i);
        printf(" 1 bim %.2f\n 2 bim %.2f\n 3 bim %.2f\n 4 bim %.2f\n", bim1[i],bim2[i],bim3[i],bim4[i]);
    }
}

void notaParaConceito(void){
    float soma = 0, media;
    for(i = 0; i < ALUNOS; i ++){
        soma = bim1[i] + bim2[i] + bim3[i] + bim4[i];
        media = soma / 4;
        if(media < 50){
            conceitos[i] = 'D';
        }else if(media >= 50 && media < 65){
            conceitos[i] = 'C';
        }else if(media >= 65 && media < 85){
            conceitos[i] = 'B';
        }else{
            conceitos[i] = 'A';
        }
    }

}

void mostrarConceitos(void){
    int opt, codAluno;
    char nomeAluno[10];

    printf("Oções: \n");
    printf("1 - Buscar nome: \n");
    printf("2 - Buscar por código: \n");
    printf("3 - Mostrar todos: \n");
    scanf("%d", &opt);

    switch(opt){
        case 1:
            printf("Informe o nome do aluno: \n");
            fflush(stdin);
            gets(nomeAluno);

            for(i = 0; i < 10; i++){
                nomeAluno[i] = tolower(nomeAluno[i]);
            }
            printf("%s", nomeAluno);

            for(i = 0; i < ALUNOS; i++){
                if(strcmp(nomeAluno, alunos[i]) == 0){
                    printf("%s: ", alunos[i]);
                    printf("%c\n", conceitos[i]);
                }
                i = ALUNOS;
            }
            break;
        case 2:
            printf("Informe o código do aluno. (1 a 10\n");
            scanf("%i", &codAluno);
            printf("%s: ", alunos[codAluno - 1]);
            printf("%c\n", conceitos[codAluno - 1]);
            break;
        case 3:
            for(i = 0; i < ALUNOS; i++){
                printf("%s: ", alunos[i]);
                printf("%c\n", conceitos[i]);
            }
            break;
        default:
            printf("Opção inválida.");
            mostrarConceitos();
    }
}