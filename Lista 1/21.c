#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], vetorb[10], vetorc[10];
 
    for (i = 0; i < 10; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetorb[i]);
 
        vetorc[i] = vetor[i] - vetorb[i];
    }
 
    for (i = 0; i < 10; i++)
    {
 
        printf("%d\n", vetorc[i]);
    }
 
    return 0;
}
 
