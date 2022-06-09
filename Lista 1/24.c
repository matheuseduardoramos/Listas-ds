#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, maiorp, menorp;
    float vetor[10], maior, menor;
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite sua altura: ", i + 1);
        scanf("%f", &vetor[i]);
        if (i == 0)
        {
            maior = vetor[i];
            maiorp = i;
            menor = vetor[i];
            menorp = i;
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            maiorp = i;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            menorp = i;
        }
    }
    printf("Altura do mais alto: %.2f\nPosicao: %d\nAltura do mais baixo: %.2f\nPosicao: %d", maior, maiorp, menor, menorp);
 
    return 0;
}
 
