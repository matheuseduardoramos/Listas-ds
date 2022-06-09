#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[5], maior, maiorp,menor,menorp;
 
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
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
        }if (vetor[i] < menor)
        {
            menor = vetor[i];
            menorp = i;
        }
    }
 
   
    printf("Maior valor na posicao: %d\n",maiorp);
    printf("Menor valor na posicao: %d\n",menorp);
    return 0;
}
 
 
