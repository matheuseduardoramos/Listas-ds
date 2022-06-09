#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], maior, menor;
 
    for (i = 0; i < 10; i++)
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
       
    }
    printf("Maior valor: %d\nMenor valor: %d",maior,menor);
    return 0;
}
