/* exercicio 4 - Escreva um programa que recebe 10 números DIFERENTES a serem armazenados em um vetor. 
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, 
sendo que caso o usuário digite um número que já foi digitado anteriormente,
o programa deverá pedir para ele digitar outro número.
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
de forma a se verificar se ele existe já está armazenado no vetor. Ao final, 
o seu algoritmo deverá imprimir os valores que estão armazenados no vetor. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[10];
    int cont = 1;


    for(int i = 0; i < 10; i++){
    printf("Digite 10 numeros inteiros %d/10: ", cont);
    scanf("%d", &num[i]);
    cont++;
    for(int j = 0; j < i; j++){
    if(num[i] == num[j]){
        printf("Digite outro numero");
        scanf("%d", &num[i]);
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", num[i]);
    }

    return 0;
}
