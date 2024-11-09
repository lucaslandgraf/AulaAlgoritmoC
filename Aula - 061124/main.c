/* exercicio 1 - Faça um programa que receba como entrada 10 valores reais, 
coloque-os em um vetor e depois e apresente os números na ordem inversa da entrada */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reais[10];
    int cont = 1;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero real %d/10: ", cont);
        scanf("%d", &reais[i]);
        cont++;
    }

    cont = 1;

    for(int i = 9; i >= 0; i--){
        printf("Resultados do vetor %d/10:  %d\n", cont, reais[i]);
        cont++;
    }
    return 0;
}
