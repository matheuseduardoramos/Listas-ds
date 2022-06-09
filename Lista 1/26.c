#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, vetor[10];
    float media = 0, desvio = 0;
 
    for (i = 0; i < 10; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        media = media + vetor[i];
    }
    media = media / 10;
    for (i = 0; i < 10; i++)
    {
        desvio = desvio + pow(vetor[i] - media, 2);
    }
    desvio = sqrt(desvio/9);
 
    printf("o desvio padrao e: %.2f",desvio);
 
    return 0;
}
