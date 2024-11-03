// Escreva um algoritmo que receba uma String do usuário e imprima as quatro primeiras letras dessa String.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[20];

    printf("Escreva uma palavra!\n");
    scanf("%s", string);

    for(int i = 0; i < 4; i++){
        printf("resultado: %c\n", string[i]);
    }

    return 0;
}
