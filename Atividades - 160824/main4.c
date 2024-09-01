#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    int custo;
    int litros;

    printf("Para descobrir quantos litros de combustivel voce vai comprar informe os seguintes valores \n");

    printf("Informe seu preco arredondado: ");
    scanf("%d", &valor);
    printf("Quantos reais voce vai gastar arredondado: ");
    scanf("%d", &custo);

    litros = custo/valor;

    printf("Voce vai comprar %d litros de combustivel \n", litros);

    return 0;
}
