#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, somavetor = 0, A[6] = {1,0,5,-2,-5,7};
 
    for ( i = 0; i < 6; i++)
    {
        if (i == 0 || i == 1 || i == 5)
        {
            somavetor += A[i];
        }
       
    }
    printf("a soma dos termos nas posicoes 0,1 e 5 do vetor da %d\n",somavetor);
    A[3] = 100;
    for ( i = 0; i < 6; i++)
    {
        printf("%d\n",A[i]);
    }
   
 
    return 0;
}
 
