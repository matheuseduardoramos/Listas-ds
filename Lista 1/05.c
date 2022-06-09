#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], par = 0;
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            par++;
        }
    }
    printf("foram digitados %d numeros pares.",par);
    return 0;
}
