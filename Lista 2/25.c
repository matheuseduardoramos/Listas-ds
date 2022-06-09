#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num, num2, resto, aux, aux2, resultado;

    scanf("%d", &num);
    scanf("%d", &num2);
    if (num < num2)
    {
        aux = num;
        num = num2;
        num2 = aux;
    }

    aux = num;
    do
    {
        resto = aux % aux2;
        aux = aux2;
        aux2 = resto;
    } while (resto != 0);
    resultado = (num * num2) / aux;

    printf("%d", resultado);

    return 0;
}

