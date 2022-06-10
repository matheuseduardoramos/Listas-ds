#include <stdio.h>
#include <stdlib.h>
void minMaxMedio(int *vetor, int tam, int *min, int *max, double *medio)
{
    int soma = 0;
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] < *min)
        {
            *min = vetor[i];
        }
        if (vetor[i] > *max)
        {
            *max = vetor[i];
        }
        soma += vetor[i];
    }
    *medio = soma / (double)tam;
}
int main()
{
    int tam = 5;
    int v[tam], min = 999, max = 0;
    double medio;
    for (int i = 0; i < tam; i++)
    {
        scanf("%d",&v[i]);
    }
 
    minMaxMedio(&v, tam, &min, &max, &medio);
    printf("min = %d,max =%d,media = %f", min, max, medio);
}
