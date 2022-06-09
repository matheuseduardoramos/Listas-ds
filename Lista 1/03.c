#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i;
    float vetorA[10],vetorB[10];
 
    for ( i = 0; i < 10; i++)
    {
            printf("Digite o %d termo do vetor: ",i+1);
            scanf("%f",&vetorA[i]);
            vetorB[i] = vetorA[i]*vetorA[i];
       
       
    }
   
    printf("Vetor A\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%f\n",vetorA[i]);
    }
    printf("Vetor B\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%f\n",vetorB[i]);
    }
    return 0;
}
