#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int tam;
    do
    {
        printf("tamanho do vetor(max 20): ");
        scanf("%d", &tam);
    } while (tam > 20);
    int v[tam],aux;
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
    printf("antes do bubble sort:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", v[i]);
    }
 
    for (int i = 1; i < tam; i++)
    {
 
        for (int j = 0; j < tam-1; j++)
        {
 
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
 
    printf("depois do bubble sort:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d\n", v[i]);
    }
}
 

 
