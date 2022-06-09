#include <stdlib.h>
#include <stdio.h>

int main()
{

    int cabeca1 = 4, cabeca2 = 0, soma = 0;

    while (cabeca1 + cabeca2 == 4 && cabeca1 >= cabeca2)
    {
        soma += cabeca1 + cabeca2;
        cabeca1--;
        cabeca2++;
    }
        printf("%d", soma);

    return 0;
}
