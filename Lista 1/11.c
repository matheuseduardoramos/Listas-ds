#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,cneg = 0;
    float vetor[10], somapos = 0;
 
    for (i = 0; i < 10; i++)
    {
 
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
        if (vetor[i] > 0)
        {
            somapos += vetor[i];
        }
        if (vetor[i] < 0)
        {
            cneg++;
        }
    }
 
    printf("o vetor possui %d numeros negativos\nA soma dos positivos da %f", cneg,somapos);
 
    return 0;
}
