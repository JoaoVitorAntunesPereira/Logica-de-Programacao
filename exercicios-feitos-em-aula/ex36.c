#include <stdio.h>

int main(){
  int nota1, nota2, cargaHoraria, frequencia;
  float mediaFinal;

  printf("Informe a primeira nota (entre 0 e 100): ");
  scanf("%d", &nota1);
  while (nota1 < 0 || nota1 > 100) {
    printf("Nota inválida. Informe a primeira nota (entre 0 e 100): ");
    scanf("%d", &nota1);
  }

  printf("Informe a segunda nota (entre 0 e 100): ");
  scanf("%d", &nota2);
  while (nota2 < 0 || nota2 > 100) {
    printf("Nota inválida. Informe a segunda nota (entre 0 e 100): ");
    scanf("%d", &nota2);
  }

  printf("Informe a carga horária da disciplina (60, 80 ou 100 horas): ");
  scanf("%d", &cargaHoraria);
  while (cargaHoraria != 60 && cargaHoraria != 80 && cargaHoraria != 100) {
    printf("Carga horária inválida. Informe a carga horária da disciplina (60, 80 ou 100 horas): ");
    scanf("%d", &cargaHoraria);
  }
    

  mediaFinal = (nota1 + nota2) / 2;
  frequencia = (mediaFinal / (cargaHoraria / 100));

  if (mediaFinal < 40) {
    printf("Reprovado por nota\n");
  } else if (mediaFinal >= 40 && mediaFinal < 70) {
    if (frequencia > 75) {
      int notaExame;
      printf("Exame\n");
      printf("Informe a nota do exame: ");
      scanf("%d", &notaExame);
      if ((mediaFinal + notaExame) / 2 >= 50) {
        printf("Aprovado pelo exame\n");
      } else {
        printf("Reprovado por exame\n");
      }
    } else {
      printf("Reprovado por falta\n");
    }
  } else if (mediaFinal >= 70) {
    if (frequencia > 75) {
      printf("Aprovado\n");
    } else {
      printf("Conselho de classe\n");
    }
  }
}
