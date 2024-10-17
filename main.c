#include <stdio.h>
#include <string.h>
#include "FuntionsCalculator.h"

int main()
{
    int chose;

    printf("=====================");
    printf("\n Calculadora Padrao\n");
    printf("=====================");

    printf("\n 1.Soma\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n 5.Sair\n");
    scanf("%d", &chose);

    switch (chose)
    {
        case 1:
            sum();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            Multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            return 0;
    }
    return 0;
}
