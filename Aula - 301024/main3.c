/* Desenvolva um programa em C que realize duas funcionalidades distintas. 
Na primeira parte, o programa deve receber duas strings do usuário, 
ordenar as letras de cada uma em ordem alfabética e exibir as strings ordenadas.*/

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    char temp;
    int n1, n2;

    // Recebe as strings do usuário
    printf("Digite a primeira string: ");
    fgets(string1, 100, stdin);
    printf("Digite a segunda string: ");
    fgets(string2, 100, stdin);

    // Calcula o comprimento das strings
    n1 = strlen(string1);
    n2 = strlen(string2);

    // Ordena as letras da primeira string
    for (int i = 0; i < n1 - 1; i++) {
        for (int j = i + 1; j < n1; j++) {
            if (string1[i] > string1[j]) {
                // Troca as letras
                temp = string1[i];
                string1[i] = string1[j];
                string1[j] = temp;
            }
        }
    }

    // Ordena as letras da segunda string
    for (int i = 0; i < n2 - 1; i++) {
        for (int j = i + 1; j < n2; j++) {
            if (string2[i] > string2[j]) {
                // Troca as letras
                temp = string2[i];
                string2[i] = string2[j];
                string2[j] = temp;
            }
        }
    }

    // Exibe as strings com letras em ordem alfabética
    printf("Strings com letras em ordem alfabetica: ");
    printf("%s\n", string1);
    printf("%s\n", string2);

    return 0;
}


/* EXERCICIO BASICO PARA VER A UTILIDADE DE UMA VARIAVEL TEMPORARIA ---------------------

#include <stdio.h>

int main() {
    int a, b, temp;

    // Entrada de valores
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    // Comparação e troca usando variável temporária
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Saída dos valores em ordem crescente
    printf("Ordem crescente: %d, %d\n", a, b);

    return 0;
}

*/
