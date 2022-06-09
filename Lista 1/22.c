 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], vetorb[10], vetorc[20];
 
    for (i = 0; i < 10; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
 
        printf("digite um numero: ");
        scanf("%d", &vetorb[i]);
    }
 
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (i % 2 == 0)
            {
                vetorc[j] = vetor[i];
                break;
            }
            else
            {
                vetorc[j] = vetorb[i];
                break;
            }
        }
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d\n", vetorc[i]);
    }
 
    return 0;
}
