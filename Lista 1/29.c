#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, v[6], somapar = 0, cimpar = 0;
 
    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero[%d]: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            somapar += v[i];
        }
        else
        {
            cimpar++;
        }
    }
    printf("Numeros pares digitados:");
    for (i = 0; i < 6; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf(" %d",v[i]);
        }
    }
    printf("\nSoma dos numeros Pares: %d\n",somapar);
    printf("Numeros pares digitados:");
    for (i = 0; i < 6; i++)
    {
        if (v[i] % 2 == 1)
        {
            printf(" %d",v[i]);
        }
    }
    printf("\nForam digitados %d numeros impares",cimpar);
    return 0;
}
 
