#include <stdio.h>
#include <stdlib.h>

int main()
{
  char sexo;
  double altura, conta;

  printf("Digite o seu sexo (M/F): ");
  scanf("%c", &sexo);
  printf("Digite a sua altura em metros: ");
  scanf("%lf", &altura);

  if(sexo == 'M' || sexo == 'm'){
    conta = (72.7 * altura) - 58;
    printf("O seu peso ideal eh %0.2lf", conta);
  }else if(sexo == 'F' || sexo == 'f'){
    conta = (62.1 * altura) - 44.7;
    printf("O seu peso ideal eh %0.2lf", conta);
  }else{
    printf("sexo invalido");
  }

  return 0;
}