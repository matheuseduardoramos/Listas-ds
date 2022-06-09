#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
    int mes, ano, dia;

    do
    {
        printf("Digite um mes: ");
        scanf("%d", &mes);

    } while (mes < 1 && mes > 12);

    printf("Digite um ano: ");
    scanf("%d", &ano);

    switch (mes)
    {
    case 1:
        dia = 31;
        break;

    case 2:
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            dia = 29;
        }
        else
        {
            dia = 28;
        }
        break;

    case 3:
        dia = 31;
        break;

    case 4:
        dia = 30;
        break;

    case 5:
        dia = 31;
        break;

    case 6:
        dia = 30;
        break;

    case 7:
        dia = 31;
        break;

    case 8:
        dia = 31;
        break;

    case 9:
        dia = 30;
        break;

    case 10:
        dia = 31;
        break;

    case 11:
        dia = 30;
        break;

    case 12:
        dia = 31;
        break;
    }

    printf("Sao %d dias", dia);

    return 0;
}

