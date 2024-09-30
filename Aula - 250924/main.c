#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()

{

  double num, conta;
  int hora = 0, minuto = 0, segundo = 0;
  bool passou = true;

  printf("Digite o volume da agua em litros: ");
  scanf("%lf", &num);

    do{
      if(passou == true){

      conta = num;
      passou = false;
      }

    conta *= 0.9;
    segundo+=30;

    if(segundo == 60){
      minuto += 1;
      segundo = 0;
    }else if(minuto == 60){
      hora += 1;
      minuto = 0;
    }

    }while(conta > 1);

    printf("Volume Inicial: %0.2lf\n", num);
    printf("Volume Final: %lf\n", conta);
    printf("Tempo em Horas: %d\n", hora);
    printf("Tempo em Minuto: %d\n", minuto);
    printf("Tempo em Segundo: %d\n", segundo);

  return 0;

}