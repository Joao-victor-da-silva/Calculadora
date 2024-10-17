#include <stdio.h>
#include <string.h>
#include "FuntionsCalculator.h"

int main()
{
    int chose;

    printf("=====================");
    printf("\n Calculadora Padrao\n");
    printf("=====================");

    printf("\n 1.Soma\n 2.Subtracao\n 3.Divisao\n 4.Multiplicacao\n 5.Sair\n");
    printf("O que deseja fazer ? Digite o numero correspondente:");
    scanf("%d", &chose);


    switch (chose)
    {
        case 1:
            printf("\n%d\n\n", sum(55, 60));
            break;

        case 2:
            printf("\n%d\n", subtraction(10, 5));
            break;

        case 3:
            printf("\n%d\n", division(10, 5));
            break;

        case 4:
            printf("\n%d\n", multiplication(10, 5));
            break;

        case 5:
            return 0;
    }
    main();
    return 0;
}
