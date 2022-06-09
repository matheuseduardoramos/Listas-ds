#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[8],x,y,z;
 
    for (i = 0; i < 8; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
       
 
 
    }
    do
    {
    printf("Digite 2 valores de 0 a 7: ");
    scanf("%d %d",&x,&y);
    } while ((x < 0 || x > 7)&&(y < 0 || y > 7));
   
    z = vetor[x] + vetor[y];
    printf("%d",z);
   
    return 0;
}
