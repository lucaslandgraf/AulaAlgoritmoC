// Crie um programa em C que leia duas palavras ou frases de até 20 caracteres digitadas pelo usuário. 
// O programa deve concatenar a segunda palavra à primeira e exibir o resultado da junção na tela

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char string1[20], string2[20];

    printf("Digite uma palavra comparativa: ");
    gets(string1);

    printf("Digite outra palavra comparativa: ");
    gets(string2);

    strcat(string1,string2);
    printf("Os valores juntos ficam: %s", string1);
    return 0;
}
