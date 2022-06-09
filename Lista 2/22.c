#include <stdlib.h>
#include <stdio.h>

int main()
{
    int divd, divs, q = 0, resto;
    printf("dividendo: ");
    scanf("%d", &divd);
    printf("divisor: ");
    scanf("%d", &divs);


    while (divd >= divs)
    {
        divd = divd - divs;
        q++;
    }
    resto = divd;
    printf("Quociente: %d\nResto: %d", q, resto);

    return 0;
}

