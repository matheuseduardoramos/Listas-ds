#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int vetor[10], i, primo = 0, d;
    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        d = 2;
        primo = 1;
        if (vetor[i] <= 1)
            primo = 0;
 
        while (primo == 1 && d <= vetor[i] / 2)
        {
            if (vetor[i] % d == 0)
                primo = 0;
            d = d + 1;
        }
 
        if (primo == 1)
            printf("%d Posicao %d.\n", vetor[i], i);
    }
 
    return 0;
}
