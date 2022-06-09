#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, op, vetor[10], x, cmult = 0, vetorb[10];
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("digite um numero x: ");
    scanf("%d", &x);
 
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % x == 0)
        {
            cmult++;
            vetorb[i] = vetor[i];
        }
        else
        {
            vetorb[i] = 0;
        }
    }
    printf("o vetor possui %d multiplos de %d\n", cmult, x);
    for (i = 0; i < 10; i++)
    {
        if (vetorb[i] != 0)
        {
            printf("%d\n", vetorb[i]);
        }
    }
 
    return 0;
}
