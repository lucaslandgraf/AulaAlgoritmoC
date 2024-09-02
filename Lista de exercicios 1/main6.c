#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, dia, mes, ano;

    printf("Escreva uma data no formato ddmmaa: ");
    scanf("%d", &data);

    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    printf("A data informada foi Dia:%d Mes: %d Ano:%d", dia, mes, ano);

    return 0;
}