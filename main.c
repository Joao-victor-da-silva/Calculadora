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

    int num1, num2;
    if(chose != 5)
    {
        printf("Digite um numero:");
        scanf("%d", &num1);

        printf("Digite outro numero:");
        scanf("%d", &num2);
    };

    switch (chose)
    {
        case 1:
            printf("\n%d\n\n", sum(num1, num2));
            break;

        case 2:
            printf("\n%d\n", subtraction(num1, num2));
            break;

        case 3:
            printf("\n%.2f\n", division(num1, num2));
            break;

        case 4:
            printf("\n%d\n", multiplication(num1, num2));
            break;

        case 5:
            return 0;

        default:
            printf("\nFuncao invalida!\n\n");

    }
    main();
    return 0;
}
