#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[5], maior, menor;
    float soma = 0, media;
 
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (i == 0)
        {
            maior = vetor[i];
            menor = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        soma += vetor[i];
    }
    media = soma/(float)5;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",vetor[i]);
    }
   
    printf("Maior valor: %d\nMenor valor: %d\nMedia dos valores: %.2f", maior, menor,media);
    return 0;
}
