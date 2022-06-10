#include <stdio.h>
#include <stdlib.h>
 
int recebe_vetor(int **p)
{
    int tam;
    printf("tamanho do vetor: ");
    scanf("%d", &tam);
    p = (int *)malloc(tam * sizeof(int));
    if (p == NULL)
    {
        return 0;
    }
    for (int i = 0; i < tam; i++)
    {
        scanf("%d",&p[i]);
    }
   
    return tam;
}
 
int main()
{
    int *vetor, x;
    x = recebe_vetor(&vetor);
   
 
    for (int i = 0; i < x; i++)
    {
        printf("%d\n",*(vetor+i));
    }
   
    free(*vetor);
    return 0;
}
 
