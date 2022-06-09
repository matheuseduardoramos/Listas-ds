#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[20],igual;
 
    for (i = 0; i < 20; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for ( i = 0; i < 20; i++)
    {
        igual = 0;
        for ( int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                igual = 1;
                break;
            }
           
           
        }
        if (igual == 0)
        {
            printf("%d\n",vetor[i]);
        }
       
    }
   
    return 0;
}
 
 
