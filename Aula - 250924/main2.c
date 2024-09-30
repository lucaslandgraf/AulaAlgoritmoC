#include <stdio.h>
#include <stdlib.h>

int main()

{

  int opcao;
  float categoriaA = 0, categoriaB = 0, categoriaC = 0 , categoriaD = 0, categoriaE = 0;
  float devolucao = 0, total, pA, pB, pC, pD, pE;

  do{

    printf("Menu\n");
    printf("1 - Categoria A\n");
    printf("2 - Categoria B\n");
    printf("3 - Categoria C\n");
    printf("4 - Categoria D\n");
    printf("5 - Categoria E\n");
    printf("6 - Devolucao\n");
    printf("7 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao){

      case 1:
        printf("Vendas A: ");
        scanf("%f", &categoriaA);
        break;
      case 2:
        printf("Vendas B: ");
        scanf("%f", &categoriaB);
        break;;
      case 3:
        printf("Vendas C: ");
        scanf("%f", &categoriaC);
        break;
      case 4:
        printf("Vendas D: ");
        scanf("%f", &categoriaD);
        break;
      case 5:
        printf("Vendas E: ");
        scanf("%f", &categoriaE);
        break;
      case 6:
        printf("Devolucao: ");
        scanf("%f", &devolucao);
        break;
      case 7:
        printf("Encerrado \n");
        break;

    }

  }while(opcao != 7);

    total = categoriaA + categoriaB + categoriaC + categoriaD + categoriaE;

    pA = (categoriaA / total) * 100;
    pB = (categoriaB / total) * 100;
    pC = (categoriaC / total) * 100;
    pD = (categoriaD / total) * 100;
    pE = (categoriaE / total) * 100;

    printf("A quantidade de produtos vendidos em A eh %.2f e a sua porcentagem eh de %.2f\n", categoriaA, pA);
    printf("A quantidade de produtos vendidos em B eh %.2f e a sua porcentagem eh de %.2f\n", categoriaB, pB);
    printf("A quantidade de produtos vendidos em C eh %.2f e a sua porcentagem eh de %.2f\n", categoriaC, pC);
    printf("A quantidade de produtos vendidos em D eh %.2f e a sua porcentagem eh de %.2f\n", categoriaD, pD);
    printf("A quantidade de produtos vendidos em E eh %.2f e a sua porcentagem eh de %.2f\n", categoriaE, pE);
    printf("A quantidade de produtos devolvidos eh %f\n", devolucao);

    total += devolucao;
    printf("O total de registro eh de %.2f", total);

  return 0;

}