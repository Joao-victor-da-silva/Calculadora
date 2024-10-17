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
    scanf("%d", &chose);

    switch (chose)
    {
        case 1:
            printf("%d", sum(55, 60));
            break;

        case 2:
            printf("%d", subtraction(10, 5));
            break;

        case 3:
            printf("%d", division(10, 5));
            break;

        case 4:
            division();
            break;

        case 5:
            return 0;
    }
    return 0;
}
