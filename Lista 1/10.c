#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i;
    float notas[15], somanotas = 0,medianotas;
 
    for (i = 0; i < 15; i++)
    {
 
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%f", &notas[i]);
        somanotas += notas[i];
    }
    medianotas = somanotas/(float)15;
   
    printf("A media da turma foi: %.1f",medianotas);
 
    return 0;
}
