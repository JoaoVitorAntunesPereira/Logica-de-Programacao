  #include <stdio.h>

  float calculaIMC(float, float);
  int verificaIMC(float);
  float calcularPesoMaximo(float, float, int);
  float calcularPesoMinimo(float, float, int);

  float imc, pesoMaximo, pesoMinimo;
  int max, min;

  int main(void){
    float peso, altura;
    char genero;

    printf("Informe o peso:");
    scanf("%f", &peso);
    printf("Informe a altura:");
    scanf("%f", &altura);
    
    printf("Informe o genero. Masculino - m, Feminino - f: ");
    scanf(" %c",&genero);

    if(genero == 'm'){
      max = 26;
      min = 19;
    }else{
      max = 24;
      min = 16;
    }


    imc = calculaIMC(peso, altura);

    if(verificaIMC(imc) == 1){
      printf("Acima do peso\n");
      printf("Peso ideal: %.2f", calcularPesoMaximo( peso,  imc,  max));
    }else if(verificaIMC(imc) == 0){
      printf("Peso ideal\n");
    }else{
      printf("Abaixo do peso\n");
      printf("Peso ideal: %.2f", calcularPesoMinimo( peso,  imc,  min));
    }

    printf("\nimc: %f", imc);

    return 0;
  }

  float calculaIMC(float peso, float altura){
    imc = peso / (altura * altura);
    return imc;
  }	

  int verificaIMC(float imc){
    if(imc > max){
      return 1;
    }else if(imc <= max && imc >= min){
      return 0;
    }else{
      return -1;
    }		
  }

  float calcularPesoMaximo(float peso, float imc, int max){
    pesoMaximo = (peso * max)/imc;
    return pesoMaximo;
  }

  float calcularPesoMinimo(float peso, float imc, int min){
    pesoMaximo = (peso * min)/imc;
    return pesoMinimo;
  }	
