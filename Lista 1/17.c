#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i;
    float vetor[10];
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
       
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%f\n",vetor[i]);
    }
   
   
    return 0;
}
