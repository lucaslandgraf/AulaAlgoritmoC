#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
  double peso, altura, imc;

  printf("Digite o seu peso (em kg): ");
  scanf("%lf", &peso);
  printf("Digite a sua altura (em metros): ");
  scanf("%lf", &altura);

  imc = peso / pow(altura, 2);

  printf("Seu imc eh: %0.2lf \n", imc);

  if(imc < 18.5){
    printf("Clasificacao: magreza");
  }else if(imc >= 18.5 && imc < 25){
    printf("Classificacao: peso normal");
  }else if(imc >= 25 && imc < 30){
    printf("Classificacao: sobrepeso");
  }else{
    printf("Clasificacao: obesidade");
  }

  return 0;
}