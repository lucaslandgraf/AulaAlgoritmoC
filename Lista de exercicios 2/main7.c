// 7. Escreva um algoritmo que permita fazer um levantamento do estoque de vinhos de uma adega, 
// que tem como dados de entrada os tipos de vinhos, sendo: “T” para tinto; “B” para branco e “R” para rosê. 
// A quantidade de garrafas de vinho da adega é desconhecida. 
// Quando a letra “F” (de fim) for informada, o programa deve parar de receber dados e escrever a quantidade de cada tipo de vinho 
// e a quantidade total de vinhos na adega.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conT = 0, conB = 0, conR = 0, soma;
    char opcao;

    do {
        printf("Pressione 'T' para vinho tinto\n");
        printf("Pressione 'B' para vinho branco\n");
        printf("Pressione 'R' para vinho rose\n");
        printf("Pressione 'F' para encerrar\n");
        printf("Digite a sua opcao: ");
        scanf(" %c", &opcao);

        // Verifica se a opção é 'F' para encerrar
        if (opcao == 'F') {
            printf("Encerrando...\n");
            break;
        }

        // Tratamento de entrada com o switch
        switch (opcao) {
            case 'T':
                conT++;
                break;
            case 'B':
                conB++;
                break;
            case 'R':
                conR++;
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (1);  // O loop continua até que o usuário digite 'F'

    // Exibe a quantidade de cada tipo de vinho
    printf("Quantidade de vinho tinto: %d\n", conT);
    printf("Quantidade de vinho branco: %d\n", conB);
    printf("Quantidade de vinho rose: %d\n", conR);

    // Soma total de vinhos
    soma = conT + conB + conR;
    printf("Quantidade total de vinhos: %d\n", soma);

    return 0;
}