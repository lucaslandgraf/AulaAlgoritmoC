#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, mes, dia, cont1, cont2, cont3;

    printf("Digite quantos anos voce tem: ");
    scanf("%d", &ano);
    printf("Faz quantos meses que voce fez aniversario?: ");
    scanf("%d", &mes);
    printf("Digite a quantidade de dias que voce fez/faria aniversario (se fosse nesse mes): ");
    scanf("%d", &dia);

    cont1 = ano * 365;
    cont2 = mes * 30;
    cont3 = cont1 + cont2 + dia;

    printf("Voce tem aproximadamente %d dias de vida \n", cont3);

    return 0;
}