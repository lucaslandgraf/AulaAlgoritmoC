// 1. Escreva um programa em C que receba do usuário a idade, o peso e o sexo de 10 pessoas. Por fim, o seu algoritmo deve imprimir:
// a. O total de homens;
// b. O total de mulheres;
// c. A soma e a média das idades dos homens;
// d. A soma e a média dos pesos das mulheres.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, totalhomens = 0, totalmulheres = 0;
    int i = 0;
    float peso, somaidadehomens, somapesosmulheres;
    char sexo;

    while(i < 10) {
        printf("pessoa %d:\n", i + 1);
        printf("Digite a idade em anos: ");
        scanf("%d", &idade);
        printf("Digite o peso em kg: ");
        scanf("%f", &peso);
        printf("Digite o sexo (M ou F): ");
        scanf(" %c", &sexo);
        if(sexo == 'm' || sexo == 'M'){
            totalhomens++;
            somaidadehomens = somaidadehomens + idade;
        }else if(sexo == 'f' || sexo == 'F'){
            totalmulheres++;
            somapesosmulheres = somapesosmulheres + peso;
        }else{
            printf("Sexo invalido! Tente novamente. \n");
        }
         i++;
    }
    printf("\nResultados:\n");
    printf("Total de homens: %d\n", totalhomens);
    printf("Total de mulheres: %d\n", totalmulheres);

    if (totalhomens > 0) {
        printf("Soma das idades dos homens: %.2f\n", somaidadehomens);
        printf("Media das idades dos homens: %.2f\n", somaidadehomens / totalhomens);
    } else {
        printf("Nenhum homem foi registrado.\n");
    }

    if (totalmulheres > 0) {
        printf("Soma dos pesos das mulheres: %.2f\n", somapesosmulheres);
        printf("Media dos pesos das mulheres: %.2f\n", somapesosmulheres / totalmulheres);
    } else {
        printf("Nenhuma mulher foi registrada.\n");
    }


    return 0;
}
