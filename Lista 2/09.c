#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char num[2], unidade[10][10] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"},
                 dezena[8][20] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"}, exc[10][20] = {"dez", "onze", "doze", "treze", "catorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};

    do
    {
        printf("digite a dezena entre 0 e 9: ");
        scanf("%d", &num[0]);
        printf("digite a unidade entre 0 e 9: ");
        scanf("%d", &num[1]);
    } while ((num[0] < 0) || (num[0] > 9) || (num[1] < 0) || (num[1] > 9));

    if (num[0] == 1)
    {
        printf("%s", exc[num[1]]);
    }

    if (num[0] == 0)
    {
        printf("%s", unidade[num[1]]);
    }
    if (num[0] > 1)
    {
        printf("%s", dezena[num[0] - 2]);
        if (num[1] > 0)
        {
            printf(" e %s", unidade[num[1]]);
        }
    }

    return 0;
}
