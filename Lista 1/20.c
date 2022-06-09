#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], vetorb[10];
 
    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("digite um numero: ");
            scanf("%d", &vetor[i]);
        } while (vetor[i] < 0 || vetor[i] > 50);
        if (vetor[i] % 2 == 1)
        {
            vetorb[i] = vetor[i];
        }
        else
        {
            vetorb[i] = 0;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetorb[i] != 0)
        {
            printf("%d\n", vetorb[i]);
        }
    }
 
    return 0;
}
 
