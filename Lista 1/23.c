#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[5], vetorb[5];
 
    for (i = 0; i < 5; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 5; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetorb[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i+1, vetor[i]);
        printf("y[%d] = %d\n", i+1, vetorb[i]);
        printf("x[%d] * y[%d] = %d\n", i+1, i+1, (vetor[i] * vetorb[i]));
    }
 
    return 0;
}
