#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    int i, j, matriz[3][6], soma = 0;
    float media = 0;
 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz inicial\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 6; j++)
        {
            printf("  %d  ", matriz[i][j]);
        }
    }
    printf("\n(1) Imprima a soma de todos os elementos das colunas impares.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j % 2 == 0)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("R = %d\n", soma);
    printf("(2) Imprima a media aritmetica dos elementos da segunda e quarta colunas.\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == 1 || j == 3)
            {
                media += matriz[i][j];
            }
        }
    }
    media = media / (float)6;
    printf("R = %.2f\n", media);
    printf("(3) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.\n");
    for (i = 0; i < 3; i++)
    {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }
    printf("(4) Imprima a matriz modificada.\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 6; j++)
        {
            printf("  %d  ", matriz[i][j]);
        }
    }
    return 0;
}
