/* exercicio 2 - Faça um programa que receba 10 números inteiros do usuário e os armazene em um vetor. 
Após isso, o seu programa deve solicitar ao usuário um número inteiro.
Com esse número inteiro, o seu programa deve:
a. Imprimir os números do vetor que são maiores que o valor informado.
b. Imprimir quantos números armazenados no vetor são menores que o valor
informado.
c. Imprimir quantas vezes o valor informado aparece no vetor */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[10];
    int cont = 1, maior = 0, menor = 0, igual = 0;
    int num;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero inteiro %d/10: ", cont);
        scanf("%d", &inteiros[i]);
        cont++;
    }

    cont = 1;

    printf("Digite um numero inteiro de comparacao: ");
    scanf("%d", &num);

    for(int i = 0; i < 10; i++){
            if(inteiros[i] > num){
              printf("Valores maiores que o numero comparador (%d): %d\n", num, inteiros[i]);
              maior++;
            }else if(inteiros[i] < num){
                printf("Valores menores que o numero comparador (%d): %d\n", num, inteiros[i]);
                menor++;
            }else{
                igual++;
            }
    }

        printf("Foram comparados %d numero(s) maior(es) que o numero comparador\n", maior);
        printf("Foram comparados %d numero(s) menor(es) que o numero comparador\n", menor);
        printf("Foram comparados %d numero(s) iguais que o numero comparador\n", igual);

    return 0;
}
