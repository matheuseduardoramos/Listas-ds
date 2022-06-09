#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int i, j, matriz[3][3], matriz2[3][3], k, aux = 0;
 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz 1 \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("  %d  ", matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
 
            matriz2[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                aux += matriz[i][k] * matriz[k][j];
            }
            matriz2[i][j] = aux;
            aux = 0;
        }
    }
    printf("Matriz 2 \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("  %d  ", matriz2[i][j]);
        }
    }
    return 0;
}
 
