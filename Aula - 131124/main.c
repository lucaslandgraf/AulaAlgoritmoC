/* Escreva um programa que leia 5 n´umeros inteiros positivos (utilize uma função que
leia esse número e verifique se ele é positivo). Para cada número informado escrever
a soma de seus divisores (exceto ele mesmo). Utilize a função SomaDivisores para
obter a soma;
Exemplo: Para o valor 8: 1+2+4 = 7. */

#include <stdio.h>
#include <stdlib.h>

void somadivisores(int num[5]){

int soma = 0;

for(int i = 0; i < 5; i++){

  if(num[i] < 0){

    printf("%d eh negativo\n", num[i]);

  }else{

    printf("%d eh positivo\n", num[i]);

  }
}

for(int i = 0; i < 5; i++){

    soma = 0;

  for(int j = num[i]-1; j > 0; j--){

    if(num[i] % j == 0){

      soma += j;

    }
  }
  printf("A soma dos divisores do numero %d eh %d\n", num[i], soma);
}
 }

int main()

{

  int num[5];

  for(int i = 0; i < 5; i++){
  printf("Digite 5 numeros inteiros: ");
  scanf("%d", &num[i]);

  }

  somadivisores(num);

  return 0;

}
