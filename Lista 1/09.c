#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[6];
 
    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite o %d termo do vetor: ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i] % 2 == 1);
    }
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }
	return 0;
}
