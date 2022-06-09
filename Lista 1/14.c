#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[10], igual;;
 
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        igual = vetor[i];
        for ( int j = i+1; j < 10; j++)
        {
            if (igual == vetor[j])
            {
                printf("%d\n",igual);
                break;
            }
           
        }
       
    }
   
    return 0;
}
 
 
