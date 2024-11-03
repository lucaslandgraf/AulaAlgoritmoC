/*Escreva um programa em C que solicite ao usuário um número inteiro positivo e utilize uma função primo para verificar se ele é primo. 
A função deve receber o número como parâmetro e exibir uma mensagem indicando se é primo ou não. 
O programa deve continuar pedindo números até o usuário digitar 0, encerrando a execução.*/

#include <stdio.h>
#include <stdlib.h>


void primo(int num){
    int divisivel = 0;

    for(int i = 2; i < num; i++){
        if(num%i==0){
            divisivel++;
        }
    }
    if(divisivel==0 && num > 0){
        printf("%d eh primo! \n", num);
    }else{
        printf("%d nao eh primo! \n", num);
    }
}

int main()

{
    int valor = 0;

    do{
    printf("Digite um numero para ver se ele eh primo, digite 0 para sair: ");
    scanf("%d", &valor);

    primo(valor);
    }while(valor != 0);

    return 0;
}
