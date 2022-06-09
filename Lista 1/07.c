#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], maior, maiorp;
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (i == 0)
        {
            maior = vetor[i];
            maiorp = i;
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            maiorp = i;
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",vetor[i]);
    }
   
    printf("Maior valor: %d\nPosicao: %d", maior, maiorp);
    return 0;
}
